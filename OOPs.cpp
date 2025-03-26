#include<iostream>

using namespace std;

class Student{

    public:
    int age;
    string name;
    string coarse;
    int grid;
    float percentage;

};

int main(){

    Student student1;

    cout<< "Please enter student name : "<<endl;
    cin>>student1.name;

    cout<< "Please enter student age : "<<endl;
    cin>>student1.age;

    cout<< "Please enter coarse name : "<<endl;
    cin>>student1.coarse;

    cout<<"Please enter G.R.I.D. : "<<endl;
    cin>>student1.grid;


    cin>>student1.percentage;

    // cout<<student1.age;

    return 0;
}