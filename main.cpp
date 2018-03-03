#include <iostream>
#include <unistd.h>
#include "Worker.h"
#include "Pest.h"
#include "Soldier.h"
#include "Policeant.h"
#include "Female.h"

using namespace std;

int main() {
    Anthill anthill(50);
    Worker worker(1, 2);
    Pest pest(2);
    Pest pest1(1);
    Soldier soldier(1, 1);
    Policeant policeant(1, 0.5);
    Female female(1, 2, &anthill);
    anthill.addEntity(&worker);
    anthill.addEntity(&pest);
    anthill.addEntity(&pest1);
    anthill.addEntity(&soldier);
    anthill.addEntity(&policeant);
    anthill.addEntity(&female);
    while (anthill.entitiesCount()) {
        printf("Food left: %f, entities left: %d\n", anthill.foodCount(), anthill.entitiesCount());
        usleep(2000000);
        anthill.act();
    }
    printf("Anthill is dead");
    return 0;
}