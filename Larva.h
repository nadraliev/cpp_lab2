//
// Created by andrew on 2/28/18.
//

#ifndef CPP_LAB2_LARVA_H
#define CPP_LAB2_LARVA_H


#include "Entity.h"

class Larva: public Entity {

public:
    Larva(int foodPerCycle, int foodRequiredToGrow, void* onLarvaCanGrow);

private:
    int foodRequiredToGrow = 0;
    void *onLarvaCanGrow = nullptr;

};


#endif //CPP_LAB2_LARVA_H
