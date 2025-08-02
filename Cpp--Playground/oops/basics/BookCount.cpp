#include <iostream>
using namespace std;

class Book{
     static int count;
     public:
     Book(){
        count++;


     }

     static void show(){
        cout<<"number of book objects created are: "<<count<<endl;
     }


};
int Book :: count =0;

int main(){
    Book b1,b2,b3,b4,b5;
    Book :: show();
    return 0;
}


