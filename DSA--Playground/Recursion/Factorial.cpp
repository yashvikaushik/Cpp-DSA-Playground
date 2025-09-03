#include <iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==0){
    return 1;
    }
   //recurrence relation
    return n*factorial(n-1);

}

int main(){
cout<<"enter a number : "<<endl;
int num;
cin>>num;
cout<<"factorial: "<<factorial(num)<<endl;
    return 0;
}