//
// Created by andrew on 03.03.18.
//

#ifndef CPP_LAB2_PEST_H
#define CPP_LAB2_PEST_H


#include "Entity.h"

class Pest : virtual public Entity {
public:
    explicit Pest(int antsKilledPerCycle);

    void act(Anthill *anthill);

private:
    int antsKillesPerCycle;
};


#endif //CPP_LAB2_PEST_H
