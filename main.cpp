#include <iostream>
#include <unistd.h>
#include "Worker.h"
#include "Pest.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    Anthill anthill(10);
    Worker worker(2, 1);
    Pest pest(1);
    anthill.addEntity(&worker);
    anthill.addEntity(&pest);
    while (anthill.entitiesCount()) {
        printf("Food left: %d, entities left: %d\n", anthill.foodCount(), anthill.entitiesCount());
        usleep(2000000);
        anthill.act();
    }
    printf("Anthill is dead");
    return 0;
}