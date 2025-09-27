#include <iostream>
#include <stack>
using namespace std;
class Stack{
    public:
    stack <int>s;
    
    void BottomInsertHelper(stack<int> &s,int count,int size,int x){
        if(count==size){
            s.push(x);
            return;
        }

        int stored=s.top();
        s.pop();
        BottomInsertHelper(s, count+1, size, x);
        s.push(stored);



    }

    void bottomInsertion(int x){
        if(!s.empty())
        BottomInsertHelper(s,0,s.size(),x);
    }
};

int main() {
    Stack st;

    // Push some elements manually
    st.s.push(10);
    st.s.push(20);
    st.s.push(30);

    // Insert 5 at the bottom
    st.bottomInsertion(5);

    // Print stack contents (top to bottom)
    while (!st.s.empty()) {
        cout << st.s.top() << " ";
        st.s.pop();
    }
    return 0;
}