#include <iostream>
using namespace std;
int reverse(int n){
    int rev=0;
    while(n!=0){
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
        
    }
    return rev;
}

int main(){
    cout<<"enter a number to find its reverse: "<<endl;
    int number;
    cin>>number;
    int rev=reverse(number);
    cout<<rev;

    return 0;
}