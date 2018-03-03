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

    void eat(Anthill *anthill);

    bool canEat(Anthill *anthill);

    virtual void act(Anthill *anthill);

protected:
    double foodPerCycle = 0;
};


#endif //CPP_LAB2_ENTITY_H
