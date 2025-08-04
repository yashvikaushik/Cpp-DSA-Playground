#include <iostream>
using namespace std;

class Vehicle{
    string brand;
    int year;

    public:
    Vehicle(string brand,int year){
        this->brand=brand;
        this->year=year;
         cout<<"base class constructor called"<<endl;

    }
    
    void setDetails(string brand,int year)
    {
        this->brand=brand;
        this->year=year;
       

    }

    void displayInfo(){
        cout<<"base class method"<<endl;
        cout<<"brand: "<<brand<<endl;
        cout<<"year: "<<year<<endl;
    }


};

class Car : public Vehicle{
     string model;
     public:
     Car (string model,string brand,int year) : Vehicle(brand,year){
        this->model=model;
        cout<<"derived class constructor"<<endl;
     }
     void setDetails(string model,string brand,int year){
        cout<<"base class method called inside the derived class"<<endl;
        Vehicle :: setDetails(brand,year);
        this->model=model;

     }

     void displayInfo(){
        Vehicle :: displayInfo();
        cout<<"model: "<<model<<endl;
     }

};

int main(){
    Car car("top","merceds",2025);
    car.setDetails("top","merceds",2025);
    car.displayInfo();
    return 0;
}