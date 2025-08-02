#include <iostream>
using namespace std;
class Rectangle{
    double length;
    double breadth;

public: 
    void input(){
        cout<<"enter the length  of the rectangle ";
        cin>>length;
        cout<<"enter the breadth  of the rectangle ";
        cin>>breadth;

    }

    void calculateArea(){
        double area=length*breadth;
        cout<<"the area of the reactangle is: "<<area<<endl;

    }

    void calculatePerimeter(){
        double perimeter=2*(length+breadth);
        cout<<"the perimeter of the rectangle is: "<<perimeter<<endl;

    }


};

int main(){
    Rectangle rectangle1;
    rectangle1.input();
    rectangle1.calculateArea();
    rectangle1.calculatePerimeter();

    return 0;
}