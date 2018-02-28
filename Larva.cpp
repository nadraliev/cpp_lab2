//
// Created by andrew on 2/28/18.
//

#include "Larva.h"

Larva::Larva(int foodPerCycle, int foodRequiredToGrow, void* onLarvaCanGrow): Entity(foodPerCycle) {
    this->foodRequiredToGrow = foodRequiredToGrow;
    this->onLarvaCanGrow = onLarvaCanGrow;
}