//
// Created by andrew on 3/6/18.
//

#ifndef CPP_LAB2_WORLD_H
#define CPP_LAB2_WORLD_H


#include "Anthill.h"
#include "Entity.h"

class World {

public:
    explicit World(int pestsCount);

    Anthill *getAnthill();

    void setAnthill(Anthill *anthill);

    List *getPests();

    void act();

private:
    List *pests;
    Anthill *anthill;
};


#endif //CPP_LAB2_WORLD_H
