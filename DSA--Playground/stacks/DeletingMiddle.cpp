#include <iostream>
#include <stack>
using namespace std;
class Stack{
  public:
    void deleteMidHelper(stack<int> s,int count,int size){
        int mid=size/2;
        if(count==mid){
            s.pop();
            return;
        }
        int stored=s.top();
        s.pop();
        deleteMidHelper(s,count+1,size);
        s.push(stored);


    }

    void deleteMid(stack<int> &s) {
        if (s.empty()) return;
        int size = s.size();
        deleteMidHelper(s, 0, size);
    }


};

int main(){
     stack<int> s;

     for (int i = 1; i <= 5; i++) {
        s.push(i);
    }

    Stack obj;
    obj.deleteMid(s); 

    cout << "Stack after deleting middle: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
