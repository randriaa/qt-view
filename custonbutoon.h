#ifndef CUSTONBUTOON_H
#define CUSTONBUTOON_H

#include <QPushButton>
#include <QObject>




class CustonButoon : public QPushButton
{

    Q_OBJECT

public slots :
    void ActionDuBouton();
public:
    CustonButoon(QString text, QWidget *parent = nullptr);

    QString getName() {return m_text ; }
    void setName(QString text ) {m_text = text ;}

    ~CustonButoon();

private:
    QString m_text ;
};


#endif // CUSTONBUTOON_H
