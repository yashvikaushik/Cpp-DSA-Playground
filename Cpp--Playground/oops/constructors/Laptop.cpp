#include <iostream>
using namespace std;
class Laptop{
    public:
string ram;
string brand;
int price;

Laptop(string ram,string brand,int price){
    cout<<"parameterised constructor"<<endl;
    this->brand=brand;
    this->price=price;
    this->ram=ram;
}
//copy constructor for deep memory creation
/*Laptop(const Laptop  &l){
    cout<<"copy constructor"<<endl;
    this->brand=l.brand;
    this->price=price;
    ram="14GB";

}*/

void display(){
cout<<brand<<" "<<ram<<" "<<price<<endl;

}




};

int main(){
    Laptop laptop1("10GB","mac",25000);
    Laptop laptop2=laptop1;
    laptop1.display();
    laptop2.display();
    return 0;
}