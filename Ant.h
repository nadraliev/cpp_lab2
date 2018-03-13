//
// Created by andrew on 3/13/18.
//

#ifndef CPP_LAB2_ANT_H
#define CPP_LAB2_ANT_H


#include "Entity.h"

class Ant : public Entity {

public:
    explicit Ant(double foodPerCycle);

    virtual void kill(Anthill *anthill, Entity *killer);

};


#endif //CPP_LAB2_ANT_H
