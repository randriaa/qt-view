#include "customwidget.h"
#include <QPainter>

CustomWidget::CustomWidget(int time , QWidget *parent) : QWidget(parent)
{
    m_timer.setInterval(time);
    m_timer.start() ;
    connect(&m_timer , SIGNAL(timeout()), this , SLOT(changeText()));
}

void CustomWidget::paintEvent(QPaintEvent *event){

    QPainter p(this); //peindre sur quelque chose
    p.setPen(Qt::black) ;
    p.setBrush(m_isClicked ? Qt::red : ( m_timerEnd ? Qt::blue :  Qt::gray)) ;
    p.drawRoundedRect( 20 , 20 , this->width()-40 , this->height()-40 , 20 , 20) ;


    p.drawText(this->width() * 0.5f - 30, this->height() * .5f ,"ToutApprendre");
    updateGeometry();
}


void CustomWidget::mousePressEvent(QMouseEvent* e){

    m_isClicked = true ;
    repaint();

}
void CustomWidget::mouseReleaseEvent(QMouseEvent *e){

    m_isClicked = false ;
    //m_timerEnd = false ;
    repaint();

}
void CustomWidget::changeText(){

    m_timerEnd = true ;
    m_timer.stop() ;
    repaint();

}
