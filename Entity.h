//
// Created by andrew on 2/28/18.
//

#ifndef CPP_LAB2_ENTITY_H
#define CPP_LAB2_ENTITY_H


#include "Anthill.h"

class Anthill;

class Entity {

public:
    Entity() = default;

    explicit Entity(double foodPerCycle);

    virtual void eat(Anthill *anthill);

    virtual bool canEat(Anthill *anthill);

    virtual void act(Anthill *anthill);

    virtual void kill(Entity *killer);

    virtual bool isDead();

protected:
    double foodPerCycle = 0;
    bool dead = false;
};


#endif //CPP_LAB2_ENTITY_H
