//
// Created by andrew on 2/28/18.
//

#ifndef CPP_LAB2_LARVA_H
#define CPP_LAB2_LARVA_H


#include "Entity.h"

class Larva: public Entity {

public:
    Larva(double foodPerCycle, double foodRequiredToGrow, void *onLarvaCanGrow);

private:
    double foodRequiredToGrow = 0;
    void *onLarvaCanGrow = nullptr;

};


#endif //CPP_LAB2_LARVA_H
