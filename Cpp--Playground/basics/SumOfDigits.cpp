#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    int sum=0;
    while(num!=0){
        int d=num%10;
        sum+=d;
        num=num/10;


    }
    cout<<"the sum of the digits is: "<<sum;
    return 0;
}