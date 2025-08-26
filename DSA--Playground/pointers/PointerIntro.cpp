#include <iostream>
using namespace std;
int main(){
    int num=5;
    int *ptr=&num; //ptr is a pointer to int 

    cout<<num<<endl;//num holds the value of 5

    cout<<ptr<<endl;//holds the address of num

    cout<<*ptr<<endl;//holds the value 5

    num+=1;//changes made here would also be made in *ptr

     cout<<num<<endl;

     cout<<*ptr<<endl;

     cout<<&num<<endl;//holds the address of num

     (*ptr)++;//updates the value in num also
     cout<<num<<endl;

     int *q=ptr;//copy pointer
     cout<<*q<<endl;
     cout<<q<<endl;


    return 0;
}