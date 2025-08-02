#include <iostream>
using namespace std;
class BankAccount{
    string accountNumber;
    double balance=0.0;
    string name;
    int amount;

    public:

    void acceptDetails(){
        cout<<"enter the name of the accou8nt holder: "<<endl;
        getline(cin,name);
        cout<<"enter your account number: "<<endl;
        cin>>accountNumber;
        cout<<"enter your amount: "<<endl;
        cin>>amount;


    }
    int updateBalance(int amount){
       
        balance+=amount;
        return balance;

    }

    void display(){
        balance=updateBalance(amount);
        cout<<"name: "<<name<<endl;
        cout<<"account number: "<<accountNumber<<endl;
        cout<<"updated balance: "<<balance<<endl;

    }



};

int main(){
    BankAccount bankAccount;
    bankAccount.acceptDetails();
    bankAccount.display();
    return 0;
}