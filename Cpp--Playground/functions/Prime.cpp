#include <iostream>
using namespace std;

bool isPrime(int n){
    int c=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            c++;
           
        }
    }
    if(c==0)
    return true;
    else
    return false;
        
    }

    int main(){
        cout<<"enter a number";
        int num;
        cin>>num;
        bool result=isPrime(num);
        if(result){
            cout<<"prime number";
        }
        else{
            cout<<"not a prime number";
        }
        return 0;
    }