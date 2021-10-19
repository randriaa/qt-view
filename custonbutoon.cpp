#include "custonbutoon.h"
#include <QDebug>
#include <QMessageBox>

void CustonButoon::ActionDuBouton()
{
    QMessageBox::information(this, "Toto", "Ceci est une alerte");
}

CustonButoon::CustonButoon(QString text , QWidget *parent)
    : QPushButton(parent), m_text(text)
{
    setText(m_text);
    //setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum); // Valeur max prédéfini
    setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);

}

CustonButoon::~CustonButoon()
{
    qDebug() << " Destruction du QpushButton" ;
}
