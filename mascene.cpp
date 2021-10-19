#include "mascene.h"

MaScene::MaScene(QObject *parent) : QGraphicsScene(parent)
{
    setSceneRect(0,0,1000,1000) ;

    for(int i = 0 ; i < 10 ; i++){
        addLine(0  , i* 50 , 450 , i*50 , QPen(Qt::gray));
        addLine(i* 50 , 0 ,  i*50 ,450 , QPen(Qt::gray) );
    }

    for(int i = 0 ; i<4 ; i++){
       MonRectItem* item = new MonRectItem();
        item->setPos(i*50,0);
        m_items.append(item);
        addItem(item);
    }
}
MaScene::~MaScene()
{
   /* for(int i = 0 ; m_items.size() ; i++ ){
        delete m_items.at(i);
    }*/
}
