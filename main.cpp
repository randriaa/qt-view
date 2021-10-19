#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>
#include <QGraphicsView>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //QString* toto = new QString("toto");
    //QPushButton btn("hello Word", &w);


    w.show();
    return a.exec(); //démarre la boucle ouvert le temps de l'application
}
