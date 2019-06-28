#ifndef LECTEURPARTITIONS_H
#define LECTEURPARTITIONS_H

#include <QWidget>

#include <QLabel>
//#include <poppler-qt5.h>
#include <poppler/qt5/poppler-qt5.h>
#include <QResizeEvent>
#include <QScrollBar>
#include <QFileDialog>
#include <QDebug>
#include <QResizeEvent>

#include <QVBoxLayout>

namespace Ui {
class LecteurPartitions;
}

class LecteurPartitions : public QWidget
{
    Q_OBJECT

public:
    explicit LecteurPartitions(QWidget *parent = nullptr);
    ~LecteurPartitions();

    void ChargerPartition(QString _cheminPartition);

private slots:

    void resizeEvent(QResizeEvent *event);

    void on_pushButtonCharger_clicked();

    void onQPushButtonImageMiniature_clicked();



private:
    Ui::LecteurPartitions *ui;

    Poppler::Document* document;
    Poppler::Document* document2;
    int nbPages;

    QList <QImage> images;
    QList <QLabel*> listeImage;

    QList <QImage> listeImagesMiniature;
    QList <QLabel*> listeLabelImageMiniature;

    QList <QPushButton *> listeBoutonImageMiniature;


    QList <QVBoxLayout*> listeLayout;

    QVBoxLayout *layoutPage1;
    QVBoxLayout *layoutPage2;
    QVBoxLayout *layoutImageMiniature;

    QWidget *widgetPage1;
    QWidget *widgetPage2;


};

#endif // LECTEURPARTITIONS_H
