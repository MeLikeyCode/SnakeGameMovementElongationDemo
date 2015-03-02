#include "Game.h"
#include "SnakeHead.h"
#include "Fruit.h"

Game::Game(QWidget *parent): QGraphicsView(parent){
    // set the scene
    scene = new QGraphicsScene(0,0,800,600);
    setScene(scene);
}

void Game::start(){
    // create snakeHead
    SnakeHead* snakeHead = new SnakeHead();
    scene->addItem(snakeHead);
    snakeHead->setFocus();

    // create a fruit
    Fruit* f1 = new Fruit();
    f1->setPos(300,300);
    scene->addItem(f1);
}
