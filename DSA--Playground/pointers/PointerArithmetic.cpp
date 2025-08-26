#include <iostream>
using namespace std;
int main(){
    double num=1;
    double *ptr=&num;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"the value of variable: "<<num<<" using pointer *p: "<<*ptr<<endl;

    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"the memory address: &num: "<<&num<<" using pointer p: "<<ptr<<endl;

    cout<<"-----------------------------------------------------------------"<<endl;
    ptr+=1;
    cout<<"after increament of p: "<<ptr<<endl;
    
    cout<<"-----------------------------------------------------------------"<<endl;
    num+=1;
    (*ptr)+=1;
    cout<<"after increament of value: "<<num<<endl;//printing 2 bcz ptr has moved away from num bcz of increament its memory address has increased
    return 0;
}