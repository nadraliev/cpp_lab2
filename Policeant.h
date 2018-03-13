//
// Created by andrew on 03.03.18.
//

#ifndef CPP_LAB2_POLICEANT_H
#define CPP_LAB2_POLICEANT_H


#include "Anthill.h"
#include "Ant.h"

class Anthill;

class Policeant : virtual public Ant {

public:
    Policeant(double foodPerCycle, double foodGrowthRelative);

    void act(Anthill *anthill) override;

private:
    double foodGrowthRelative = 0;

};


#endif //CPP_LAB2_POLICEANT_H
