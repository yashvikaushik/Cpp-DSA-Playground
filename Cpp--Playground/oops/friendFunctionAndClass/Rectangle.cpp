#include <iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;
public:
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }

    void display(){
        cout<<"length: "<<length<<" breadth: "<<breadth<<endl;
    }
    friend void calculate(Rectangle r);
};

void calculate(Rectangle r){
    int area=0;
    area=r.length*r.breadth;
    cout<<"area: "<<area<<endl;
    

}

int main(){
    Rectangle rectangle(3,2);
    rectangle.display();
    calculate(rectangle);

    return 0;
}