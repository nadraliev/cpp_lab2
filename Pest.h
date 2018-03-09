//
// Created by andrew on 03.03.18.
//

#ifndef CPP_LAB2_PEST_H
#define CPP_LAB2_PEST_H


#include "Entity.h"

class Pest : virtual public Entity {
public:
    explicit Pest(double foodPerCycle);

    void act(Anthill *anthill);
};


#endif //CPP_LAB2_PEST_H
