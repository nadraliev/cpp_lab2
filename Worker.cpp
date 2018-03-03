//
// Created by andrew on 2/28/18.
//

#include "Worker.h"

Worker::Worker(int foodPerCycle, int foodMinedPerCycle): Entity(foodPerCycle) {
    this->foodMinedPerCycle = foodMinedPerCycle;
}

void Worker::act(int *foodHeap) {
    mineFood(foodHeap);
}

void Worker::mineFood(int *foodHeap) {
    *foodHeap += foodMinedPerCycle;
}