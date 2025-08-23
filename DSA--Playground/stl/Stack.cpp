#include <iostream>
#include <stack>
using namespace std;
int main(){
    //creating a stack
    stack<int> s;
    s.push(22);
    s.push(33);
    s.push(44);
    cout<<"the top most element is"<<s.top()<<endl;
    s.pop();
    cout<<"the top most element is"<<s.top()<<endl;
    cout<<"the size :"<<s.size()<<endl;
    cout<<"is the stack empty"<<s.empty();//if return 0 means false that means that the container/stack has elements and is not empty
    return 0;
}