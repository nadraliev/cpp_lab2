//
// Created by andrew on 03.03.18.
//

#ifndef CPP_LAB2_PEST_H
#define CPP_LAB2_PEST_H


#include "Entity.h"
#include "Anthill.h"

class Pest : public Entity {
public:
    explicit Pest(double foodPerCycle);

    void act(Anthill *anthill) override;
};



#endif //CPP_LAB2_PEST_H
