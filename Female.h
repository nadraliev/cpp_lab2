//
// Created by andrew on 03.03.18.
//

#ifndef CPP_LAB2_FEMALE_H
#define CPP_LAB2_FEMALE_H


#include "Entity.h"
#include "Larva.h"
#include "Ant.h"

class Female : virtual public Ant {

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
