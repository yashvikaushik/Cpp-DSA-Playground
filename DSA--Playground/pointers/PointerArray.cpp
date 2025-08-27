#include <iostream>
using namespace std;
int main(){
    // int arr[10]={1,2,3,4,5};
    // cout<<"1. address of first memory block of the arary: "<<arr<<endl;

    // cout<<"2. address of first memeory block of the array using &: "<<&arr[0]<<endl;

    // cout<<"3. value at first position: "<<arr[0]<<endl;

    // cout<<"4. value at first position using *: "<<*arr<<endl;

    // cout<<"5> *arr+1: "<<*arr+1<<endl;

    // cout<<"6. *(arr+1): "<<*(arr+1)<<endl;

    // cout<<"7. &(arr+1): "<<&arr+1<<endl;//jumps the entire array

    // int *ptr=&arr[0];

    // cout<<"8. "<<ptr<<endl;

    // cout<<"9. "<<*ptr<<endl;

    // cout<<"10. "<<sizeof(ptr)<<endl;

    // cout<<"11. "<<sizeof(*ptr)<<endl;

    // int *p=&arr[0]; //holds the memory address of first array block

    // //ERROR :
    // //arr+=1;

    // cout<<p<<endl;
    // cout<<p+1<<endl;

    int arr[10]={20,30,40,50};
    cout<<"address of array: "<<arr<<endl;

    int *p=&arr[0];
    cout<<"before increament value"<<*p<<endl;//dereferencing
     cout<<"before increament value"<<arr[0]<<endl;
    (*p)+=1;
    cout<<"after increament value"<<*p<<endl;
    cout<<"after increament value"<<arr[0]<<endl;
    
    cout<<"before increament address: "<<p<<endl;
    p+=1;
    cout<<"after increament address: "<<p<<endl;
    cout<<"after increament value"<<*p<<endl;

    cout<<"address of pointer to the pointer of an array"<<&p<<endl;







    return 0;
}