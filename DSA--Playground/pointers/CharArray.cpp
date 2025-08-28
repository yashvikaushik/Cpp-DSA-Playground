#include <iostream>
using namespace std;
int main(){
    char ch[10]="abcdef";
    char *ptr=&ch[0];
    cout<<*ptr<<endl;//gives the values dtored at first memory block
    cout<<ptr<<endl;//gives the whole array content
    cout<<ch<<endl;//gives the whole array content
    cout<<ch[0]<<endl;//gives value at index 0
    cout<<&ch[0]<<endl;

    char temp='z';
    char *p=&temp;
    cout<<temp<<endl;//gives z
    cout<<*p<<endl;//gives z
    cout<<p<<endl;//starts printing from z and continuing till it finds a null character
    
    return 0;
}