#include<iostream>
using namespace std;
class Factor{
    public:
    int fact=0;
    int primeFactor(int num){
        int prime=-1;
        while(num%2==0){
            prime=2;
            num/=2;
        }
        for (int i = 3; i * i <= num; i += 2) {
            while (num % i == 0) {
                prime = i;
                num /= i;
            }
        }


    }
};