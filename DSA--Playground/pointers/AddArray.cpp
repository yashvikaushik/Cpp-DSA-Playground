#include <iostream>
using namespace std;
class Array{
    int size;
    int *arr;

    public:
    Array(int s){
        size=s;
        arr=new int[size];
        cout<<"constructor called"<<endl;


    }

    void input(){
        cout<<"enter the array elements"<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }

    void append(Array a){
        int *temp=new int[size+a.size];
        int k=0;
        for(int i=0;i<size;i++){
            temp[k++]=arr[i];
        }
        for(int i=0;i<a.size;i++){
             temp[k++]=arr[i];

        }

        arr=temp;
        //a=temp;
        size+=a.size;


    }

    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" "<<endl;

        }
    }

};
int main(){
    cout<<"Enter the size of first array: "<<endl;
    int s1;
    int s2;
    cin>>s1;
     cout<<"Enter the size of second array: "<<endl;
     cin>>s2;

     Array a1(s1);
     Array a2(s2);
     cout<<"Enter the elements of first array: "<<endl;
     a1.input();
     cout<<"Enter the elements of second array: "<<endl;
     a2.input();

     a1.display();
     a2.display();
     a1.append(a2);
     a1.display();


    return 0;
}