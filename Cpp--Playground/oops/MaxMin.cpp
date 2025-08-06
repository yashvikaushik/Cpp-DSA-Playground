#include <iostream>
using namespace std;
class MaxMin{
  public:
  int size;
  int arr[0];
  
  void getInput(){
    cout<<"enter the size of the array that you want to create"<<endl;
    cin>>size;
    arr[size];
    cout<<"enter the array values: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
  }

  void findMaxMin(){
  int max=arr[0];
  int min=arr[0];
  for(int i=0;i<size;i++){
    if(arr[i]<min){
        min=arr[i];
    }
    else if(arr[i]>max){
        max=arr[i];
    }
    else{
        cout<<""<<endl;
    }


  }
  cout<<"Min: "<<min<<endl;
  cout<<"Max: "<<max<<endl;
  }
};
int main(){
    MaxMin m;
    m.getInput();
    m.findMaxMin();
    return 0;
}