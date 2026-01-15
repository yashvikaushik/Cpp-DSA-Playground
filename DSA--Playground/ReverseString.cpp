#include<iostream>
using namespace std;
class Reverse{
    public:
    string reverse(string s){
        string st;
        string sb;
        for(int i=s.size()-1;i>=0;i--){
            st+=s[i];
        }

        st=st+' ';
        int k=0;
        for(int i=0;i<st.size();i++){
            if(st[i]==' '){
                for(int j=i;j>=k;j--){
                    sb+=st[j];
                }
                k=i+1;
            }
        }
        return sb;
    }
};

int main() {
    Reverse obj;
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Reversed string: " << obj.reverse(s);

    return 0;
}


