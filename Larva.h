//
// Created by andrew on 2/28/18.
//

#ifndef CPP_LAB2_LARVA_H
#define CPP_LAB2_LARVA_H


#include <functional>
#include "Entity.h"
#include "Female.h"


class Larva: public Entity {

public:
    Larva(double foodPerCycle, double foodRequiredToGrow, std::function<void(Larva *)> onLarvaCanGrow);

    void act(Anthill *anthill) override;

private:
    double foodRequiredToGrow = 0;
    std::function<void(Larva *)> onLarvaCanGrow = nullptr;

};


#endif //CPP_LAB2_LARVA_H
