#include <iostream>
using namespace std;
class Vehicle{
    string brand;
    int maxSpeed;
    public:
    Vehicle(){
        brand="Generic";
        maxSpeed=100;
    }
    Vehicle(string brand,int speed){
        this->brand=brand;
        this->maxSpeed=maxSpeed;

    }

    void displayInfo(){
        cout<<"Vehicle Info: "<<endl;
        cout<<"Brand: "<<brand<<endl;
        cout<<"Max Speed: "<<maxSpeed<<endl;
    }

};

class Car : public Vehicle{
    int numDoors;
    string fuelType;

    public:
//default constructor that uses the vehicle default constructor
    Car():Vehicle(){
        numDoors=4;
        fuelType="petrol";
    }

    Car(int numDoors,string fuelType,string brand,int maxSpeed):Vehicle(brand,maxSpeed){
        this->numDoors=numDoors;
        this->fuelType=fuelType;

    }

    
  void displayInfo(){
    Vehicle::displayInfo();
    cout << "Number of Doors: " << numDoors << endl;
    cout << "Fuel Type: " << fuelType << endl;
  }

};

int main() {
    Car c1;
    c1.displayInfo();

    cout << "\n-----------\n";

    Car c2(2, "Diesel", "BMW", 220);
    c2.displayInfo();

    return 0;
}