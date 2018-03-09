//
// Created by andrew on 2/28/18.
//

#ifndef CPP_LAB2_WORKER_H
#define CPP_LAB2_WORKER_H

#include "Entity.h"

class Worker : virtual public Entity {

public:
    Worker(double foodPerCycle, double foodMinedPerCycle);

    void mineFood(Anthill *anthill);

    void act(Anthill *anthill) override;

private:
    double foodMinedPerCycle = 0;

};


#endif //CPP_LAB2_WORKER_H
