//
// Created by andrew on 09.03.18.
//

#ifndef CPP_LAB2_WORLD_H
#define CPP_LAB2_WORLD_H


#include "List.h"

class World {

public:
    World(int pestsCount, Anthill *anthill);

    List *getPests();

    void act();

private:
    int pestsBornPerCycle;
    List pests;
    Anthill *anthill;

    void addPests(int count);

};


#endif //CPP_LAB2_WORLD_H
