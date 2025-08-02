#include <iostream>
using namespace std;
int main(){
    cout<<"enter a number: ";
    int num;
    cin>>num;
    int rev=0;
    int temp=num;
    while(num>0){
        int d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    if(temp==rev){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }

    return 0;
}