#include "snake.h"

snake::snake(QPoint *pos, snake *parent=nullptr)
{
    this->pos = pos;
    this->parent = parent;
}

snake* snake::getParent(){
    return parent;
}

void snake::evolve(){

}

void snake::setParent(snake *parent){
    this->parent = parent;
}

QPoint snake::getPos(){
    return *pos;
}

void snake::setPos(QPoint *pos){
    this->pos = pos;
}
