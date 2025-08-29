#include <iostream>
using namespace std;
int main(){


int arr[3][4];
//column wise input
// cout<<endl<<"Enter the array elements"<<endl;
// for(int i=0;i<4;i++){
//     for(int j=0;j<3;j++){
//         cin>>arr[j][i];
//     }
// }

//row wise input
cout<<endl<<"Enter the array elements"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
}


cout<<"The array elements as entered by you are : "<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


}