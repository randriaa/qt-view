#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "custonbutoon.h"
#include <QVBoxLayout>  // Vertical
#include <QHBoxLayout>
#include <QGraphicsView>
#include <QDebug>

#include "customwidget.h"
#include "mascene.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots :


private:
    CustomWidget* m_customWidget ;

    QGraphicsView* m_view ;
    QGraphicsView* m_view2 ;
    MaScene* m_scene;

    QVBoxLayout* m_layout ;
    QWidget* m_central ;

};

#endif // MAINWINDOW_H


