#include <iostream>
using namespace std;
int main(){
    int num=10; //normal variable holding the value 10

    int *ptr=&num; //ptr is teh point to int which holds the address of memory location of the block where 10 is stored
    cout<<"=================="<<endl;
    cout<<ptr<<endl;//prints the address of the memory location
    cout<<&num<<endl;
    cout<<"=================="<<endl;
    

    cout<<num<<endl;
    cout<<*ptr<<endl; //dereferencing hence *ptr holds the value at num
      cout<<"=================="<<endl;
    

    cout<<sizeof(num)<<endl; //4 bytes which is the size of int
    cout<<sizeof(ptr)<<endl; //8 bytes usually the size of the address
    cout<<sizeof(&num)<<endl;
    cout<<sizeof(*ptr)<<endl;

    num+=1;
    *ptr+=1;

    ptr+=1; //pointer is now pointing to any random block of memory so the value stored at it now may have unusual behaviour
    
 cout<<"=================="<<endl;
    cout<<num<<endl;
    cout<<*ptr<<endl;
 cout<<"=================="<<endl;
    cout<<ptr<<endl;
    cout<<&num<<endl;

    int *p=0; //would show segmentation fault on printing
    cout<<*p; 


    int arr[10]={4,6,9,2,1,0};
    cout<<arr<<endl; //address of first memory block of the whole array
    //(arr+=1;) array address itself cannot be modified it has to be first stored in some other pointer
    //int p=arr; can be stored inside the pointer only
    cout<<arr<<endl;

    int *ptr=&arr[0]; //pointer to int where first array memory block ka address is stored
    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    cout<<ptr+1<<endl;
    cout<<*ptr+1<<endl;
    cout<<*(ptr+1)<<endl;


    char c[10]="abcdef";
    char *pointer=&c[0];
    cout<<c<<endl;
    cout<<pointer<<endl;
    cout<<*pointer<<endl;
    cout<<c[1]<<endl;
    

    
    return 0;
}