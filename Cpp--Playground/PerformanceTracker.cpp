#include <iostream>
using namespace std;
class Student{
    string name;
    int marks[3];
    int average;

    public:
    
    void inputDetails(){
        cout<<"enter your full name: "<<endl;
        getline(cin,name);
        cout<<"enter your marks in the subjects"<<endl;
        for(int i=0;i<3;i++){
            cout<<"enter the marks in subject "<< (i+1) <<endl;
            cin>>marks[i];

        }

    }

    void calculateAverage(){
        int sum=0;
        for(int i=0;i<3;i++){
            sum+=marks[i];
        }
       
        average=sum/3;
         cout<<"the average marks are: "<<average<<endl;


    }

    bool calculateResult(){
        calculateAverage();

        if(average<40){
           return  true;
        }
        else{
           return false;
        }

    }

};

int main(){
    Student student;
    student.inputDetails();
    bool result=student.calculateResult();
    if(result){
        cout<<"pass";
    }
    else{
        cout<<"fail";
    }

    return 0;
}
