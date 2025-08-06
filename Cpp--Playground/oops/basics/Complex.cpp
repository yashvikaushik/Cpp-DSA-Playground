#include <iostream>
using namespace std;

class Complex{
    int real;
    int imaginary;
    public:
    Complex(){
        real=0;
        imaginary=0;

}

Complex(int real,int imaginary)
{
    this->imaginary=imaginary;
    this->real=real;
}

Complex add(Complex c){
    Complex result;
    result.real=this->real+c.real;
    result.imaginary=this->imaginary+c.imaginary;
    return result;
}

Complex subtract(Complex c){
    Complex result;
    result.real=this->real-c.real;
    result.imaginary=this->imaginary-c.imaginary;
    return result;
}

void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }

};

int main(){
    Complex c1(4, 5);
    Complex c2(2, 1);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    Complex sum = c1.add(c2);
    Complex diff = c1.subtract(c2);

    cout << "\nSum: ";
    sum.display();

    cout << "Difference: ";
    diff.display();

    return 0;
}