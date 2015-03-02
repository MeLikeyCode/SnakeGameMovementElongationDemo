#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>

class Game: public QGraphicsView{
public:
    // constructors
    Game(QWidget* parent=NULL);

    // public methods
    void start();

    // public attributes
    QGraphicsScene* scene;

private:

};

#endif // GAME_H
