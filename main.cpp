#include <iostream>
#include <unistd.h>
#include "Worker.h"
#include "Soldier.h"
#include "Policeant.h"
#include "Female.h"
#include "World.h"

using namespace std;

int main() {
    World world(3);
    Anthill anthill(50);
    world.setAnthill(&anthill);
    Worker worker(1, 2);
    Soldier soldier(1, 1);
    Policeant policeant(1, 0.5);
    Female female(1, 2, &anthill);
    anthill.addEntity(&worker);
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