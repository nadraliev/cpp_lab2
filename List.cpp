//
// Created by andrew on 04.03.18.
//

#include "List.h"

List::List() {
    head = nullptr;
    tail = nullptr;
    size = 0;
}

void List::add(Entity *entity) {
    Node *temp = new Node;
    temp->data = entity;
    temp->next = nullptr;
    if (head == nullptr) {
        head = temp;
        tail = temp;
        temp = nullptr;
    } else {
        tail->next = temp;
        tail = temp;
    }
    size++;
}

void List::remove(int position) {
    if (position == 0) {
        Node *temp = head;
        head = head->next;
        delete temp;
    } else if (position == size - 1) {
        Node *current;
        Node *previous;
        current = head;
        while (current->next != nullptr) {
            previous = current;
            current = current->next;
        }
        tail = previous;
        previous->next = nullptr;
        delete current;
    } else {
        Node *current = head;
        Node *prevous;
        for (int i = 1; i < position; i++) {
            prevous = current;
            current = current->next;
        }
        prevous->next = current->next;
    }
    size--;
}

void List::remove(Entity *entity) {
    Node *current = getHead();
    int pos = 0;
    while (current->data != entity && current != nullptr) {
        current = current->next;
        pos++;
    }
    if (current != nullptr)
        remove(pos);
}

int List::getSize() {
    return size;
}

Node *List::getTail() {
    return tail;
}

Node *List::getHead() {
    return head;
}
