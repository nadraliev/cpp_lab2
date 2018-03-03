#include <iostream>
#include <unistd.h>
#include "Worker.h"
#include "Pest.h"
#include "Soldier.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    Anthill anthill(10);
    Worker worker(2, 2);
    Pest pest(2);
    Pest pest1(1);
    Soldier soldier(1, 1);
    anthill.addEntity(&worker);
    anthill.addEntity(&pest);
    anthill.addEntity(&pest1);
    anthill.addEntity(&soldier);
    while (anthill.entitiesCount()) {
        printf("Food left: %d, entities left: %d\n", anthill.foodCount(), anthill.entitiesCount());
        usleep(2000000);
        anthill.act();
    }
    printf("Anthill is dead");
    return 0;
}