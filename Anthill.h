//
// Created by andrew on 03.03.18.
//

#ifndef CPP_LAB2_ANTHILL_H
#define CPP_LAB2_ANTHILL_H

#include <vector>
#include "Entity.h"

class Anthill {

public:
    Anthill(int foodHeap);

    void addEntity(Entity *entity);

    void removeEntity(int position);

    void act();

    int foodCount();

    int entitesCount();

private:
    int foodHeap;
    std::vector<Entity *> entities;

};


#endif //CPP_LAB2_ANTHILL_H
