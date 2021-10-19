#include "mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Ma super app");


    m_view = new QGraphicsView(this) ;
    m_view2 = new QGraphicsView(this) ;
    m_scene = new MaScene(m_view) ;

    m_view->setScene(m_scene) ;
    m_view2->setScene(m_scene) ;

    m_view->setAlignment(Qt::AlignLeft | Qt::AlignTop); // alligner le coin superieur gauche de ma vue
    m_view->centerOn(0, 0); //centrer la vue sur 0 en x et 0 en y

    m_central = new QWidget(this) ;

    m_layout = new QVBoxLayout(m_central) ;
    m_central->setLayout(m_layout);

    m_layout->addWidget(m_view);
    m_layout->addWidget(m_view2);

    QTransform transform;
    transform.rotate(50);
    transform.scale(1.5 , 1.5 );
    m_view2->setTransform(transform);
    setCentralWidget(m_central);

}

MainWindow::~MainWindow()
{
}

