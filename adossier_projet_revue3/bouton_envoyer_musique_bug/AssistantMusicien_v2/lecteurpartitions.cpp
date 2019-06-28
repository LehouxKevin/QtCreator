#include "lecteurpartitions.h"
#include "ui_lecteurpartitions.h"

LecteurPartitions::LecteurPartitions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LecteurPartitions),
    document(nullptr)
{
    ui->setupUi(this);

    /*
    verticalLayout = new QVBoxLayout();
    QWidget *w = new QWidget(this);
    w->setLayout(verticalLayout);

    ui->scrollAreaPage1->setWidget(w);*/

    /*ui->scrollArea->setMinimumSize(860,800);
    ui->scrollArea->setMaximumSize(860,800);*/

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

/*

    ui->scrollAreaPage1->setMinimumSize(790,800);
    ui->scrollAreaPage1->setMaximumSize(790,800);

    ui->scrollAreaPage2->setMinimumSize(790,800);
    ui->scrollAreaPage2->setMaximumSize(790,800);*/
    QSize tailleWidget = ui->frame->size();
    qDebug() << tailleWidget;
}

LecteurPartitions::~LecteurPartitions()
{
    delete ui;
}

void LecteurPartitions::ChargerPartition(QString _cheminPartition)
{

    for (int p = 0; p < layoutImageMiniature->count(); p++) {
        QWidget *w = layoutImageMiniature->itemAt(p)->widget();
        if(w != nullptr)
        {
            w->setVisible(false);
            layoutImageMiniature->removeWidget(w);
            }
    }

    if(!_cheminPartition.isEmpty())
    {
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
            qDebug() << tailleWidget;
            int resolution = tailleWidget.width() * 120 / 1050;

            int i = 0;
            nbPages=document->numPages();
            images.clear();
            for(i=0; i<nbPages;i++)
            {
                image = document->page(i)->renderToImage(tailleWidget.width() * 120 / 1050,tailleWidget.width() * 119 / 1050,0,0,tailleWidget.width()-50);
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



            // Remplissage de la liste de page miniature


            // correction des images qui reste lors d'une réouverture + faire en sorte qu'il n'y ai pas de scroolbar
            listeImagesMiniature.clear();
            listeLabelImageMiniature.clear();
            listeBoutonImageMiniature.clear();


            document2 = Poppler::Document::load(_cheminPartition);
            if (!document2 || document2->isLocked())
            {
                qDebug() << "Erreur lors de l'ouverture du document PDF" ;
                delete document2;
            }
            else
            {
                QImage imageMiniature;
                QSize tailleWidgetImagesMiniature = ui->scrollAreaImageMiniature->size();

                int i = 0;
                int nbPages2=document2->numPages();
                listeImagesMiniature.clear();
                for(i=0; i<nbPages2;i++)
                {
                    imageMiniature = document2->page(i)->renderToImage(tailleWidgetImagesMiniature.width() * 110 / 1050,tailleWidgetImagesMiniature.width() * 140 / 1050,0,0,tailleWidgetImagesMiniature.width()-50);
                    listeImagesMiniature.append(imageMiniature);
                }

            }


            QSize tailleIcone;
            tailleIcone.setHeight(140);
            tailleIcone.setWidth(140);
            int k=1;

            QPushButton *boutonImageMiniature;
            foreach (QImage img, listeImagesMiniature)
            {
                boutonImageMiniature = new QPushButton();
                boutonImageMiniature->setIcon(QIcon(QPixmap::fromImage(img)));
                boutonImageMiniature->setMaximumSize(130,150);
                boutonImageMiniature->setMinimumSize(130,150);
                boutonImageMiniature->setIconSize(tailleIcone);
                boutonImageMiniature->setText(QString::number((k++)));
                connect(boutonImageMiniature,&QPushButton::clicked,this,&LecteurPartitions::onQPushButtonImageMiniature_clicked);
                listeBoutonImageMiniature.append(boutonImageMiniature);
            }
            foreach (QPushButton* b, listeBoutonImageMiniature)
            {
                layoutImageMiniature->addWidget(b);
            }
        }
    }
}

void LecteurPartitions::resizeEvent(QResizeEvent *event)
{
    QSize tailleLecteur = event->size() ;
    int largeurLecture = tailleLecteur.width() - 120;
    int hauteurLecture = tailleLecteur.height();
    ui->scrollAreaPage1->resize(largeurLecture,hauteurLecture);
}

void LecteurPartitions::on_pushButtonCharger_clicked()
{
    QString nomFichier = QFileDialog::getOpenFileName(this,
                                                      tr("Ouverture d'une partition"),
                                                      "/home/USERS/ELEVES/SNIR2017/klehoux/Téléchargements/",
                                                      tr("Partition (*.pdf)"));

    ChargerPartition(nomFichier);
}

void LecteurPartitions::onQPushButtonImageMiniature_clicked()
{
    QPushButton *touche;
    touche=qobject_cast<QPushButton*>(sender());
    int indice = touche->text().toInt();

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
    layoutPage1->addWidget(listeImage[indice-1]);
    listeImage[indice-1]->setVisible(true);
    // affichage sur la page de droite si pas derniere page
    if(indice!=nbPages)
    {
        layoutPage2->addWidget(listeImage[indice]);
        listeImage[indice]->setVisible(true);
    }


    ui->scrollAreaPage1->verticalScrollBar()->setValue(0);

    show();
}

