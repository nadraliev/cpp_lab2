//
// Created by andrew on 2/28/18.
//

#ifndef CPP_LAB2_ENTITY_H
#define CPP_LAB2_ENTITY_H


class Entity {

public:
    Entity() = default;
    explicit Entity(int foodPerCycle);
    void eat(int *foodHeap);
    bool canEat(int *foodHeap);
    void act(int *foodHeap);

protected:
    int foodPerCycle = 0;
};


#endif //CPP_LAB2_ENTITY_H
