#include <iostream>
using namespace std;

//Base class
class Student{
    protected: 
    int rollNo;
    string name;

    public:

     void getDetails(){
        cout<<"enter the name of the student"<<endl;
        getline(cin,name);
        cout<<"enter the roll number of the student"<<endl;
        cin>>rollNo;

    }

    void showDetaisl(){
        cout<<"the name of the student is :"<<name<<endl;
        cout<<"the roll number of the student is: "<<rollNo<<endl;
    }


};

//intermediate class 
class Exam : public Student{
    protected:
    int marks1,marks2;

    public:
    void getMarks(){
        cout<<"enter your marks in two subjects: "<<endl;
        cin>>marks1;
        cin>>marks2;
    }

    void showMarks(){
        cout<<"your marks in two sibjects are: "<<marks1<<" "<<marks2<<endl;
    }




};

//child class 
class Result : public Exam{

    public :
    void displayResult(){
        Exam exam;
        int sum=0;
        sum=marks1+marks2;
        int average=sum/2;

        Student :: showDetaisl();
        Exam :: showMarks();
        cout<<"total marks: "<<sum<<endl;
        cout<<"Average: "<<average<<endl;

    }

};

int main(){
    Result result;
    result.getDetails();
    result.getMarks();
    cout<<"----- Student Result -----"<<endl;
    result.displayResult();
    return 0;
}