#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number that has to be tested: ";
    cin>>num;
    if(num>0 && num%2==0){
        cout<<"the number is even and postive";
    }
    else if(num>0 && num%2!=0){
        cout<<"the number is postive and odd";
    }
    else if(num<0 && num%2==0){
        cout<<"the number is negative and even";
    }
    else if(num<0 && num%2!=0){
        cout<<"the number is negative and odd";
    }
    else{
        cout<<"the number entered is 0";
    }
    return 0;
}