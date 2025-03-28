#include <iostream>

using namespace std;

class Car
{
public:
    string name;
    string color;
    int speed;

public:

void getCarData();

Car(){    
};

Car(string name, string color, int speed){
    
    this->name=name;
    this->color=color;
    this->speed=speed;
    
};
};

void Car::getCarData(){
    cout<< "------------------------------"<< endl;
    cout<< " Name of car : "<<this->name << endl;
    cout<< " Color of car : "<<this->color << endl;
    cout<< " Speed of car : "<<this->speed << endl;
};

int main(){

    
    Car suv("audi", "black", 120);

    suv.getCarData();
    
    return 0;
}