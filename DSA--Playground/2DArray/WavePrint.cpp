#include <iostream>
using namespace std;


int main(){

    cout<<"Enter the number of rows that must be present :"<<endl;
    int row;
    cin>>row;
    cout<<"enter the number of columns that must be presentL"<<endl;
    int column;    
    cin>>column;

    cout<<"Enter the array elements"<<endl;
    int arr[100][100];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
         cin>>arr[i][j];
        }
    }

    //now for row wise printing 
    //if colum is odd then bottom to top 
    //if column is even the top to bottom

    for(int col=0;col<column;col++){

        if(col%2==0){
            for(int i=0;i<row;i++){
                cout<<arr[i][col]<<" ";
            }
        }

            else{
                for(int i=row-1;i>=0;i--){
                    cout<<arr[i][col]<< " ";
                }
            }

        }
        cout<<endl;
    


    return 0;
}