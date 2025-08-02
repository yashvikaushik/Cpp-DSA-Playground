#include <iostream>
using namespace std;
class Car{
string model;
string color;
int year;


public:
Car(){
    model="ground";
    color="black";
    year=1990;
    cout<<"default constructor"<<endl;

}

Car(string model,string color,int year){
    this->color=color;
    this->model=model;
    this->year=year;
}

void input(){
    cout<<"enter the model of the car";
    getline(cin,model);
}

void display(){
    cout<<model<<" "<<color<<" "<<year<<endl;
}



};

int main(){
    string model;
    Car car(model,"white",2025);
    car.input();
    car.display();
    return 0;
}