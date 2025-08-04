#include <iostream>
using namespace std;

//Base class
class Employee{
    int empId;
    string name;

    public:

    void setDetails(int empId,string name){
        this->empId=empId;
        this->name=name;
    }

    void displayDetails(){
        cout<<"base class method"<<endl;
        cout<<"employee ID: "<<empId<<endl;
        cout<<"employee name: "<<name<<endl;
    }

};

class Manager : public Employee{
    string department;

    public:
    void setDepartment(string department){

        this->department=department;
       

    }

    void displayManager(){
        cout<<"derived calss method:"<<endl;
        cout<<"the details of the manager are: "<<endl;
        Employee::displayDetails();//base class method call in the derived class
        cout<<"the department :"<<department<<endl;

    }

};

int main(){
    Manager manager;
    manager.setDetails(1,"prashant");
    manager.setDepartment("sales");
    cout<<"----------------------------"<<endl;
    manager.displayDetails();
    cout<<"----------------------------"<<endl;
    manager.displayManager();
    return 0;
}