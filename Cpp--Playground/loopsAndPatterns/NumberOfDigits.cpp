#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number whose digits you want to count: ";
    cin>>number;
    int count=0;
    if(number==0){
        count=1;
        cout<<"the number of digits in the number are: "<<count;
    }
    else{
    while(number!=0){
        int d=number%10;
        count++;
        number=number/10;
    }
    cout<<"the number of digits in the number are: "<<count;
}
    
    return 0;
}