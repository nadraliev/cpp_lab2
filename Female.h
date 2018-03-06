//
// Created by andrew on 03.03.18.
//

#ifndef CPP_LAB2_FEMALE_H
#define CPP_LAB2_FEMALE_H


#include "Entity.h"
#include "Larva.h"

class Larva;

class Female : public Entity {

public:
    Female(double foodPerCycle, int larvasBornPerCycle, Anthill *anthill);

    void act(Anthill *anthill) override;

    void onLarvaReadyToGrow(Larva *larva);

private:
    double larvasBornPerCycle = 0;
    Anthill *anthill;

    Entity *giveBirthToNewEntity();

};


#endif //CPP_LAB2_FEMALE_H
