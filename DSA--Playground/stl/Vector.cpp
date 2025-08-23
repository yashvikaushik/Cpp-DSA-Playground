#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    cout<<"Enter the size of the vector you want to be created"<<endl;
    int size;
    cin>>size;
    vector<int> v(size);//a vector of int type created
    cout<<"enter the vector elements"<<endl;
    for(int &i:v){
        cin>>i;
    }
    cout<<"vactor in reverse order"<<endl;
    reverse(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.push_back(30);
    
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
//erasing the vector
    v.erase(v.begin(),v.end());

    cout<<v.size()<<endl;//returns the number of elements
    cout<<v.capacity();//return the space aquired by the vector
    cout<<endl;
    v.insert(v.begin(),99);
    cout<<v.at(0);



    

    return 0;
}