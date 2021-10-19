#ifndef CUSTOMWIDGET_H
#define CUSTOMWIDGET_H

#include <QObject>
#include <QWidget>
#include <QTimer>

class CustomWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CustomWidget(int time , QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent* event);
    void mousePressEvent(QMouseEvent* e) ;
    void mouseReleaseEvent(QMouseEvent* e) ;

private slots:
    void changeText();

private:
    bool m_isClicked = false ;
    bool m_timerEnd = false ;
    QTimer m_timer;
signals:

};

#endif // CUSTOMWIDGET_H
