#include "lecteurpartitions.h"
#include "ui_lecteurpartitions.h"

LecteurPartitions::LecteurPartitions(InterfaceMetronome *_metronome,AccesBdd *accesBdd,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LecteurPartitions),
    document(nullptr),
    metronome(_metronome),
    accesBdd(accesBdd)
{
    ui->setupUi(this);

    // gestion de la résolution


    /*
    1920 * 1080 par default
    1600 * 900
    */

    QPoint positionGlobalCurseur = QCursor::pos();
    int ecranCurseur = qApp->desktop()->screenNumber(positionGlobalCurseur);
    QRect geometryEcran = qApp->desktop()->screen(ecranCurseur)->geometry();
    //QPoint localCursorPos = positionGlobalCurseur - geometryEcran.topLeft();

    largeurResolution = geometryEcran.width();
    hauteurResolution = geometryEcran.height();

    /*qDebug()<<"mouse screen : "<<ecranCurseur;
    qDebug()<<"mouse screen geometry :"<<geometryEcran;
    qDebug()<<"local cursor pos : "<<localCursorPos;*/

    //if(QApplication::desktop()->width()==1600 && QApplication::desktop()->height()==900)
    if(largeurResolution==1600 && hauteurResolution==900)
    {
        ui->frame->setFixedSize(ui->frame->width()-280,ui->frame->height()-175);

        QSize tailleBouton;
        QSize tailleIconBouton;
        QSize tailleIconeZoom;

        tailleBouton.setWidth(ui->pushButtonCharger->width()-40);
        tailleBouton.setHeight(ui->pushButtonCharger->height()-40);

        tailleIconBouton.setWidth(ui->pushButtonCharger->iconSize().width()-20);
        tailleIconBouton.setHeight(ui->pushButtonCharger->iconSize().height()-20);

        tailleIconeZoom.setWidth(ui->pushButtonZoomMoins->iconSize().width()-20);
        tailleIconeZoom.setHeight(ui->pushButtonZoomMoins->iconSize().height()-20);


        // resize et position boutons

        ui->pushButtonCharger->setGeometry(20,20,tailleBouton.width(),tailleBouton.height());
        ui->pushButtonCharger->setIconSize(tailleIconBouton);

        ui->pushButtonPagePrec->setGeometry(20,130,tailleBouton.width(),tailleBouton.height());
        ui->pushButtonPagePrec->setIconSize(tailleIconBouton);

        ui->pushButtonPageSuiv->setGeometry(20,230,tailleBouton.width(),tailleBouton.height());
        ui->pushButtonPageSuiv->setIconSize(tailleIconBouton);

        ui->pushButtonPartitionPrecedente->setGeometry(20,340,tailleBouton.width(),tailleBouton.height());
        ui->pushButtonPartitionPrecedente->setIconSize(tailleIconBouton);

        ui->pushButtonPartitionSuivante->setGeometry(20,440,tailleBouton.width(),tailleBouton.height());
        ui->pushButtonPartitionSuivante->setIconSize(tailleIconBouton);

        ui->pushButtonZoomPlus->setGeometry(20,550,ui->pushButtonZoomPlus->width()-40,ui->pushButtonZoomPlus->height()-20);
        ui->pushButtonZoomPlus->setIconSize(tailleIconeZoom);

        ui->pushButtonZoomMoins->setGeometry(20,610,ui->pushButtonZoomMoins->width()-40,ui->pushButtonZoomMoins->height()-20);
        ui->pushButtonZoomMoins->setIconSize(tailleIconeZoom);

        // scroll area

        ui->scrollAreaPage1->setGeometry(110,10,ui->scrollAreaPage1->width()-100,ui->scrollAreaPage1->height()-165);
        ui->scrollAreaPage2->setGeometry(110+ui->scrollAreaPage1->width()+10,10,ui->scrollAreaPage2->width()-100,ui->scrollAreaPage2->height()-165);


        ui->scrollAreaImageMiniature->setGeometry(110+ui->scrollAreaPage1->width()+10+ui->scrollAreaPage2->width()+10,10,ui->scrollAreaImageMiniature->width(),ui->scrollAreaImageMiniature->height()-50);
    }

    qDebug()<<"Résolution : ";
    qDebug()<<QApplication::desktop()->width()<<"x"<<QApplication::desktop()->height();

    qDebug()<<"----------";


    layoutPage1 = new QVBoxLayout();
    widgetPage1 = new QWidget(this);
    listeLayout.append(layoutPage1);
    widgetPage1->setLayout(layoutPage1);

    layoutPage2 = new QVBoxLayout();
    widgetPage2 = new QWidget(this);
    listeLayout.append(layoutPage2);
    widgetPage2->setLayout(layoutPage2);

    layoutImageMiniature = new QVBoxLayout();
    QWidget *widgetImageMiniature = new QWidget();
    widgetImageMiniature->setLayout(layoutImageMiniature);

    ui->scrollAreaPage1->setWidget(widgetPage1);
    ui->scrollAreaPage2->setWidget(widgetPage2);
    ui->scrollAreaImageMiniature->setWidget(widgetImageMiniature);

    widgetPage1->setContentsMargins(0,0,0,0);
    widgetPage2->setContentsMargins(0,0,0,0);

    layoutPage1->setContentsMargins(0,0,0,0);
    layoutPage2->setContentsMargins(0,0,0,0);

    ui->scrollAreaPage1->horizontalScrollBar()->setEnabled(false);
    ui->scrollAreaPage1->verticalScrollBar()->setEnabled(false);
    ui->scrollAreaPage1->horizontalScrollBar()->hide();
    ui->scrollAreaPage1->verticalScrollBar()->hide();

    ui->scrollAreaPage1->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->scrollAreaPage1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    ui->scrollAreaPage2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->scrollAreaPage2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    ui->scrollAreaPage2->horizontalScrollBar()->setEnabled(false);
    ui->scrollAreaPage2->verticalScrollBar()->setEnabled(false);
    ui->scrollAreaPage2->horizontalScrollBar()->hide();
    ui->scrollAreaPage2->verticalScrollBar()->hide();

    ui->scrollAreaImageMiniature->horizontalScrollBar()->setEnabled(false);
    ui->scrollAreaImageMiniature->horizontalScrollBar()->hide();

    numeroPage = 0;
    indexCheminPartitionOuvert=0;
}

LecteurPartitions::~LecteurPartitions()
{
    delete ui;
}

void LecteurPartitions::ChargerPartition(QString _cheminPartition)
{
    if(!_cheminPartition.isEmpty())
    {
        listeCheminPartitions.clear();
        listeCheminPartitions.append(_cheminPartition);
        QFileInfo info(_cheminPartition);
        parentWidget()->setWindowTitle(info.fileName());
        if(document != nullptr)
            delete document;
        images.clear();
        foreach (QLabel *img, listeImage) {
            delete img;
        }
        listeImage.clear();

        document = Poppler::Document::load(_cheminPartition);
        if (!document || document->isLocked())
        {
            qDebug() << "Erreur lors de l'ouverture du document PDF" ;
            delete document;
        }
        else
        {
            QImage image;

            QSize tailleWidget = ui->scrollAreaPage1->size();
            int i = 0;
            nbPages=document->numPages();
            images.clear();
            for(i=0; i<nbPages;i++)
            {
                if(largeurResolution==1600 && hauteurResolution==900)
                {
                    image = document->page(i)->renderToImage(tailleWidget.width() * 125/1050 ,tailleWidget.width() * 120/1050,0,0,tailleWidget.width()-50);
                }
                else {
                    image = document->page(i)->renderToImage(tailleWidget.width() * 128/1050 ,tailleWidget.width() * 120/1050,0,0,tailleWidget.width()-50);
                }
                images.append(image);
            }


            //Affichage

            QLabel *ptrLabelImage;

            foreach (QImage img, images)
            {
                ptrLabelImage = new QLabel;
                ptrLabelImage->setPixmap(QPixmap::fromImage(img));
                listeImage.append(ptrLabelImage);

            }
            if(nbPages>1)
            {
                listeLayout[0]->addWidget(listeImage[0]);
                listeLayout[1]->addWidget(listeImage[1]);
            }
            else {
                listeLayout[0]->addWidget(listeImage[0]);
            }


            ui->scrollAreaPage1->verticalScrollBar()->setValue(0);

            show();
        }

    }
}

void LecteurPartitions::ChargerPartitionDepuisGestionnaire(QString _cheminPartition)
{
    ChargerPartition(_cheminPartition);
}

void LecteurPartitions::actualiserPlaylist(QList<QString> listeNom, QList<QString> listeChemin)
{
    for(int t=0;t<10;t++)
    {
        for (int p = 0; p < layoutImageMiniature->count(); p++) {
            QWidget *w = layoutImageMiniature->itemAt(p)->widget();
            if(w != nullptr)
            {
                w->setVisible(false);
                layoutImageMiniature->removeWidget(w);
            }
        }
    }

    QPushButton *boutonImageListePartition;
    int i = 0;

    QList <QString> listeTitre;
    QList <QString> listeInterprete;

    listeBoutonSetPartition.clear();
    listeCheminPartitions = listeChemin;
    indexCheminPartitionOuvert=0;


    foreach(QString chaine, listeNom)
    {
        QList <QString> tmpSplit;
        tmpSplit = chaine.split(" - ");

        listeTitre.append(tmpSplit[0]);
        listeInterprete.append(tmpSplit[1]);

        boutonImageListePartition =new QPushButton();
        boutonImageListePartition->setText(listeTitre[i]+"\n"+listeInterprete[i]);
        boutonImageListePartition->setStyleSheet("font-size:10px");
        connect(boutonImageListePartition,&QPushButton::clicked,this,&LecteurPartitions::onQPushButtonListePartitions_clicked);
        listeBoutonSetPartition.append(boutonImageListePartition);
        layoutImageMiniature->addWidget(listeBoutonSetPartition[i]);
        i++;
    }

}

void LecteurPartitions::resizeEvent(QResizeEvent *event)
{
    /*
    QSize tailleLecteur = event->size() ;
    int largeurLecture = tailleLecteur.width() - 120;
    int hauteurLecture = tailleLecteur.height();
    ui->scrollAreaPage1->resize(largeurLecture,hauteurLecture);*/

    //QDesktopWidget *desktop = new QDesktopWidget();
    /*
    qDebug()<<"largeur écran :"<<QApplication::desktop()->width();
    qDebug()<<"hauteur écran :"<<QApplication::desktop()->height();*/
}

void LecteurPartitions::onQPushButtonListePartitions_clicked()
{
    QPushButton *b=qobject_cast<QPushButton*>(sender());

    foreach(QPushButton *bouton, listeBoutonSetPartition)
    {
        //bouton->setStyleSheet("background-color: #D9EBED");
        bouton->setStyleSheet("color: black");
        bouton->setStyleSheet("font-size:10px");
    }
    b->setStyleSheet("color: #3155e2");
    b->setStyleSheet("font-size:10px");


    //int index=listeBoutonSetPartition.indexOf(b);
    indexCheminPartitionOuvert=listeBoutonSetPartition.indexOf(b);
    ChargerPartition(listeCheminPartitions.at(indexCheminPartitionOuvert));
}

void LecteurPartitions::on_pushButtonCharger_clicked()
{
    QString nomFichier = QFileDialog::getOpenFileName(this,
                                                      tr("Ouverture d'une partition"),
                                                      REPERTOIRE_PARTITION,
                                                      tr("Partition (*.pdf)"));

    ChargerPartition(nomFichier);
}

/*
void LecteurPartitions::onQPushButtonImageMiniature_clicked()
{
    QPushButton *touche;
    touche=qobject_cast<QPushButton*>(sender());
    numeroPage = touche->text().toInt()-1;

    for (int i = 0; i < layoutPage1->count(); ++i) {
        QWidget *w = layoutPage1->itemAt(i)->widget();
        if(w != nullptr)
        {

            w->setVisible(false);
            layoutPage1->removeWidget(w);
        }
    }
    for (int i = 0; i < layoutPage2->count(); ++i) {
        QWidget *w = layoutPage2->itemAt(i)->widget();
        if(w != nullptr)
        {
            w->setVisible(false);
            layoutPage2->removeWidget(w);
        }
    }

    if(numeroPage+1 == nbPages)
    {
        numeroPage--;
        qDebug()<<numeroPage;
    }

    // affichage sur la page de gauche
    layoutPage1->addWidget(listeImage[numeroPage]);
    listeImage[numeroPage]->setVisible(true);
    // affichage sur la page de droite si pas derniere page
    //if(numeroPage!=nbPages)

    if(nbPages>1)
    {
        layoutPage2->addWidget(listeImage[numeroPage+1]);
        listeImage[numeroPage+1]->setVisible(true);
    }

    ui->scrollAreaPage1->verticalScrollBar()->setValue(0);

    show();
}*/


void LecteurPartitions::on_pushButtonPagePrec_clicked()
{
    if(document!=nullptr)
    {
        numeroPage--;
        if(numeroPage >0)
        {
            qDebug()<<numeroPage;
            for (int i = 0; i < layoutPage1->count(); ++i) {
                QWidget *w = layoutPage1->itemAt(i)->widget();
                if(w != nullptr)
                {
                    w->setVisible(false);
                    layoutPage1->removeWidget(w);
                }
            }
            for (int i = 0; i < layoutPage2->count(); ++i) {
                QWidget *w = layoutPage2->itemAt(i)->widget();
                if(w != nullptr)
                {
                    w->setVisible(false);
                    layoutPage2->removeWidget(w);
                }
            }
            // affichage sur la page de gauche
            layoutPage1->addWidget(listeImage[numeroPage-1]);
            listeImage[numeroPage-1]->setVisible(true);
            // affichage sur la page de droite si pas derniere page

            if(nbPages>1)
            {
                layoutPage2->addWidget(listeImage[numeroPage]);
                listeImage[numeroPage]->setVisible(true);
            }
            ui->scrollAreaPage1->verticalScrollBar()->setValue(0);
        }
        else {
            numeroPage++;
        }
    }
}

void LecteurPartitions::on_pushButtonPageSuiv_clicked()
{
    if(document!=nullptr)
    {
        numeroPage++;
        if(numeroPage <nbPages)
        {
            qDebug()<<numeroPage;
            for (int i = 0; i < layoutPage1->count(); ++i) {
                QWidget *w = layoutPage1->itemAt(i)->widget();
                if(w != nullptr)
                {

                    w->setVisible(false);
                    layoutPage1->removeWidget(w);
                }
            }
            for (int i = 0; i < layoutPage2->count(); ++i) {
                QWidget *w = layoutPage2->itemAt(i)->widget();
                if(w != nullptr)
                {
                    w->setVisible(false);
                    layoutPage2->removeWidget(w);
                }
            }
            // affichage sur la page de gauche
            layoutPage1->addWidget(listeImage[numeroPage-1]);
            listeImage[numeroPage-1]->setVisible(true);
            // affichage sur la page de droite

            if(nbPages>1)
            {
                layoutPage2->addWidget(listeImage[numeroPage]);
                listeImage[numeroPage]->setVisible(true);
            }
            ui->scrollAreaPage1->verticalScrollBar()->setValue(0);
        }
        else {
            numeroPage--;
        }
    }
}

void LecteurPartitions::on_pushButtonZoomPlus_clicked()
{
    QPainter paint;
    paint.scale(ui->scrollAreaPage1->width()+10,ui->scrollAreaPage1->height()+10);

    //ui->scrollAreaPage1->setPalette(paint);

}

void LecteurPartitions::on_pushButtonPartitionPrecedente_clicked()
{
    if(indexCheminPartitionOuvert-1>0)
    {
        indexCheminPartitionOuvert--;
        ChargerPartition(listeCheminPartitions.at(indexCheminPartitionOuvert));
    }
}

void LecteurPartitions::on_pushButtonPartitionSuivante_clicked()
{
    if(indexCheminPartitionOuvert+1<listeCheminPartitions.count())
    {
        indexCheminPartitionOuvert++;
        ChargerPartition(listeCheminPartitions.at(indexCheminPartitionOuvert));
    }
}

void LecteurPartitions::on_pushButtonPresetMetronome_clicked()
{
    if(!listeCheminPartitions.isEmpty())
    {
        QStringList infos;
        infos = accesBdd->obtenirCheminMetronome(listeCheminPartitions.at(indexCheminPartitionOuvert));
        metronome->ChargerPreset(infos);
    }
}
