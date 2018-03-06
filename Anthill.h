//
// Created by andrew on 03.03.18.
//

#ifndef CPP_LAB2_ANTHILL_H
#define CPP_LAB2_ANTHILL_H

#include <vector>
#include "Entity.h"
#include "List.h"

class Entity;

class List;

class Anthill {

public:
    Anthill(double foodHeap);
    ~Anthill();

    void addEntity(Entity *entity);

    List *getEntites();

    void act();

    double foodCount();

    int entitiesCount();

    void addFood(double count);

    void getFood(double count);

private:
    double foodHeap;
    List *entities;

};


#endif //CPP_LAB2_ANTHILL_H
