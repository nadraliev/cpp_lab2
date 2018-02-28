//
// Created by andrew on 2/28/18.
//

#ifndef CPP_LAB2_WORKER_H
#define CPP_LAB2_WORKER_H

#include "Entity.h"

class Worker: public Entity {

public:
    Worker(int foodPerCycle, int foodMinedPerCycle);
    void mineFood(int *foodHeap);

private:
    int foodMinedPerCycle = 0;

};


#endif //CPP_LAB2_WORKER_H
