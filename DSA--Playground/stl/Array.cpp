#include <iostream>
#include <array>
using namespace std;
int main(){
    array<int,5> arr = {1,2,3,4,5};
    int size=arr.size();
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<size<<endl;
    cout<<arr.at(2);
    return 0;
}
