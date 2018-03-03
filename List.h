//
// Created by andrew on 04.03.18.
//

#ifndef CPP_LAB2_LIST_H
#define CPP_LAB2_LIST_H


#include "Entity.h"

class Entity;

struct Node {
    Entity *data;
    Node *next;
};

class List {

public:
    List();

    void add(Entity *entity);

    void remove(int position);

    void remove(Entity *entity);

    int getSize();

    Node *getTail();

    Node *getHead();

private:
    Node *head;
    Node *tail;
    int size;

};


#endif //CPP_LAB2_LIST_H
