#include <iostream>
using namespace std;

class Student{
    string name;
    int rollNumber;
    int marks[3];
    static int count;
    char grade;

    public:

    //parameterized constructor
    Student(string name,int rollNumber,int marks[]){
        count++;
        this->name=name;
        this->rollNumber=rollNumber;
        //
        for(int i=0;i<3;i++){
        this->marks[i]=marks[i];
        }
        cout<<"parameterized constructor called for: "<<name<<endl;

    }

    //default constructor
    Student(){
        count++;
        this->name="none";
        this->rollNumber=0;
        for(int i=0;i<3;i++){
            this->marks[i]=0;
        }
        cout<<"default constructor called for: "<<name<<endl;
        
    }
    // a destructor
    ~Student(){
        cout<<"destructor called for "<<name<<endl;
        count--;
    };

    void inputMarks(){
        for(int i=0;i<sizeof(marks)/sizeof(marks[0]);i++){
            cout<<"enter your marks in subject "<<(i+1)<<" : "<<endl;
            cin>>marks[i];
        }

    }

    float calculateAverage(){
        float avg=0.0f;
        int sum=0;
        for(int i=0;i<3;i++){
            sum+=marks[i];
        }
        avg=sum/3;
        return avg;

    }

    char calculateGrade(){
        float average=calculateAverage();
        if(average>=90){
            return 'A';
        }
        else if(average<90 && average>=80){
            return 'B';
        }

        else if(average<80 && average>=70){
            return 'C';
        }

        else if(average<70 && average>=60){
            return 'D';
        }
        else if(average<60 && average>=50){
            return 'E';
        }
        else{
            return 'F';
        }



    }
    void setData(string name,int rollNumber){
        this->name=name;
        this->rollNumber=rollNumber;

    }

    char getGrade(){
        grade=calculateGrade();
        return grade;
    }


    void display(){
        cout<<"name: "<<name<<endl;
        cout<<"roll number: "<<rollNumber<<endl;
        cout<<"grade: "<<calculateGrade()<<endl;
        if(grade == 'A'){
        cout << "🎉 Congratulations! Student has scored an A!" << endl;
    }
    }

    static void countStudents(){
        cout<<"total number of student created so far are: "<<count<<endl;
    }

};
int Student :: count=0;//scope resolution initialization of a static variable declared inside the class
int main() {
   int marks[3]={90,90,90};
    Student s("rishita",23,marks);
    //s.inputMarks();
    s.calculateGrade();
    s.countStudents();
    s.display();
    return 0;
}