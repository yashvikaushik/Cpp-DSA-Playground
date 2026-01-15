#include<iostream>
#include<cmath>
using namespace std;
class sqareRoot{
    public:
    int perfectSquare(int num){
        int st=sqrt(num);
        if(st*st==num){
            return st;
        }
        return floor(num);

    }


};

int main() {
    sqareRoot obj;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = obj.perfectSquare(num);

    if (result * result == num)
        cout << "Perfect Square, square root = " << result;
    else
        cout << "Not a Perfect Square";

    return 0;
}