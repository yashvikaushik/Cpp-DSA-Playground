#include <iostream>
using namespace std;
int main(){
     string name,college;
     cout<<"enter your name: ";
     getline(cin,name);
     cout<<"enter the name of your university";
     getline(cin,college);
     cout<<"enter your marks in two sujects";
     int m1,m2;
     cin>>m1;
     cin>>m2;
     int totalMarks=0;
     totalMarks=m1+m2;
     cout<<"name: "<<name<<endl;
     cout<<"university: "<<college<<endl;
     cout<<"marks entered: "<<m1<<" , "<<m2<<endl;
     cout<<"your total marks are: "<<totalMarks;
    return 0;
}