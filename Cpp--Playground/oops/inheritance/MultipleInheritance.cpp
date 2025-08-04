#include <iostream>
using namespace std;

class EmployeeDetails{
  string name;
  int empID;

  public:
  void getDetails()
  {
    cout<<"enter your name and ID : "<<endl;
    getline(cin,name);
    cin>>empID;
  }

  void showDetails()
  {
    cout<<"name of the employee is: "<<name<<endl;
    cout<<"the employee ID is: "<<empID<<endl;
  }

};
class SalaryDetails{
    float basicPay,hra,da;
    public:
    void getSalary()
    {
        cout<<"enter the salary components: "<<endl;
        cout<<"enter basic pay: "<<endl;
        cin>>basicPay;
        cout<<"enter HRA: "<<endl;
        cin>>hra;
        cout<<"enter DA: "<<endl;
        cin>>da;
    }

    float calculateSalary()
{
    return basicPay+hra+da;
}

};

class PaySlip: public EmployeeDetails,public SalaryDetails{
    public:
     void generateSlip(){
        EmployeeDetails : showDetails();
        cout<<"Total Salary: "<<calculateSalary()<<endl;

     }


};

int main(){
    PaySlip paySlip;
    paySlip.getDetails();
    paySlip.getSalary();
    paySlip.generateSlip();
    return 0;
}