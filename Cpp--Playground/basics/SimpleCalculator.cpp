#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a;
    cin>>b;
    cout<<"Enter the operation that you wangt to perform: ";
    char operation;
    cin>>operation;
    switch(operation){
        case '+':
        cout<<(a+b);
        break;
        case '-':
        cout<<(a-b);
        break;
        case '*':
        cout<<(a*b);
        break;
        case '/':
        cout<<(a/b);
        break;
        default: 
        cout<<"wrong operation";
    }
    return 0;
}