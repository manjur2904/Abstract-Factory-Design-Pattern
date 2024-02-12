#include <iostream>
using namespace std;

#include "CarFactory.cpp"

// #define SIMPLE_CAR 1
#define LUXURY_CAR 1
int main(){
    // cout<<"Manjur\n";
    #ifdef SIMPLE_CAR
        CarFactory *factory = new SimpleCarFactory;
    #elif LUXURY_CAR
        CarFactory *factory = new LuxuryCarFactory;
    #endif

    Car *car = factory->buildWholeCar();
    car->printDetails();
        
    return 0;
}