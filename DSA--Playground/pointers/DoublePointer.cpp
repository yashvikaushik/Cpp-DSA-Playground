#include <iostream>
using namespace std;
int main(){
    int value=5;//a variable consisting of 5
    int *ptr1=&value;//pointer corresponding to value
    int **ptr2=&ptr1;//pointer corresponding to ptr1

    cout<<endl<<"ways to print the content of variable value "<<endl;
    cout<<value<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr2<<endl;

    cout<<endl<<"ways to print the address of value"<<endl;
    cout<<&value<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr2<<endl;

    cout<<"printing the address of pointer 1"<<endl;

    cout<<ptr2<<endl;
    cout<<&ptr1<<endl;

    cout<<*ptr2<<endl;//address of value matlab value jo ptr1 mai padhi hai

    return 0;
}