//
// Created by andrew on 03.03.18.
//

#ifndef CPP_LAB2_SOLDIER_H
#define CPP_LAB2_SOLDIER_H


#include <vector>
#include "Entity.h"

class Soldier : public Entity {

public:
    Soldier(double foodPerCycle, int pestKilledPerCycle);

    void act(Anthill *anthill) override;

private:
    int pestKilledPerCycle = 0;

    void killPests(Anthill *anthill);


};


#endif //CPP_LAB2_SOLDIER_H
