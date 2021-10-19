#ifndef MASCENE_H
#define MASCENE_H

#include <QGraphicsScene>
#include <QObject>
#include <QWidget>
#include <QGraphicsScene>
#include "monrectitem.h"

class MaScene : public QGraphicsScene
{
public:
    explicit MaScene(QObject *parent = nullptr);
    ~MaScene();

    QList<MonRectItem*> m_items ;
};

#endif // MASCENE_H
