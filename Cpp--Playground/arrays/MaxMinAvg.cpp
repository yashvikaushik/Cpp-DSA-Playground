#include <iostream>
using namespace std;
class ArrayStats{
int *arr; //dynamic memory allocation in the heap
int size;
public:
//default constructor
ArrayStats(){
    this->size=0;
    arr=new int[size];
}
//parameterized constructor
ArrayStats(int size){
this->size=size;
arr=new int[size];
}

//destructor to manually deallocate the memorywhich was created in the heap by dynamic allocation of the array
~ArrayStats(){
    delete arr;
}
void input(){
    cout<<"enter the size of the array you want to declare"<<endl;
    cin>>size;
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
}

int findMax(){
    int max=arr[0];
    for(int i=0;i<size;i++){
    if(arr[i]>max)
    max=arr[i];
    }
    return max;
}

int findMin(){
    int min=arr[0];
    for(int i=0;i<size;i++){
    if(arr[i]<min)
    min=arr[i];
    }
    return min;
}

int findAverage(){
    int sum=0;
    int avg=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    avg=sum/size;

    return avg;
}
};

int main(){

    ArrayStats as;
    as.input();
    cout<<"average: "<<as.findAverage()<<endl;
     cout<<"max: "<<as.findMax()<<endl;
      cout<<"min: "<<as.findMin()<<endl;
    
    return 0;
}

