#include <iostream>
#include <unistd.h>
#include "Worker.h"
#include "Anthill.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    Anthill anthill(10);
    Worker worker(2, 1);
    anthill.addEntity(&worker);
    while (true) {
        printf("Food left: %d, entities left: %d\n", anthill.foodCount(), anthill.entitesCount());
        usleep(2000000);
        anthill.act();
    }
    return 0;
}