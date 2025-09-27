#include <iostream>
#include <stack>
using namespace std;
class Paranthesis{
    public:
    stack<char> s;
    bool valid(string express){
        for(char ch:express){
            if(ch=='('|| ch=='{'||ch=='['){
                s.push(ch);
            }
            else{

                if(s.empty()){
                  return false;
                }

                char top=s.top();
                s.pop();
                if((ch == ')' && top != '(') ||
                   (ch == '}' && top != '{') ||
                   (ch== ']' && top!= '[')){
                    return false;
                   }
                
            }
        }
       return s.empty();

    }
};

int main() {
    Paranthesis p;
    string expr = "{[()}";
    if(p.valid(expr)) 
        cout << "Balanced\n";
    else 
        cout << "Not Balanced\n";

    return 0;
}