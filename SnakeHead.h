#ifndef SNAKEHEAD_H
#define SNAKEHEAD_H

#include "SnakeBody.h"
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QList>
#include <QPointF>

class SnakeHead: public QGraphicsRectItem{
public:
    // constructors
    SnakeHead(QGraphicsItem* parent=NULL);

    // events
    void keyPressEvent(QKeyEvent* event);

    // public method
    void elongate();
    void moveBodies();
private:
    QList<SnakeBody*> snakeBodies;
    QPointF prevPos;
};

#endif // SNAKEHEAD_H
