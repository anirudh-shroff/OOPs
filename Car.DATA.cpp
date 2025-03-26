#include <iostream>

using namespace std;

class Car
{
private:
    string name;
    string color;
    int speed;

public:
    void setCarData(string , string , int );
    void getCarData();
};

void Car::setCarData(string name , string color, int speed){
    this->name = name;
    this->color = color;
    this->speed = speed;
};

void Car::getCarData(){
    cout<< "------------------------------"<< endl;
    cout<< " Name of car : "<<this->name << endl;
    cout<< " Color of car : "<<this->color << endl;
    cout<< " Speed of car : "<<this->speed << endl;
};

int main(){

    int size = 3;
    Car suv[size];

    int speed;
    string name, color;

    for ( int i = 0; i < size ; i++)
    {
        cout<< " Enter name of the car : ";
        getline(cin, name);
        
        cout<< " Enter color of car : ";
        getline(cin, color);

        cout<< " Enter speed of car : ";
        cin>>speed;
        cin.ignore();



        suv[i].setCarData(name , color , speed);
    }

    for (int i = 0; i < size; i++)
    {
        suv[i].getCarData();
        cout<<endl;

    }
    
    
    return 0;
}
