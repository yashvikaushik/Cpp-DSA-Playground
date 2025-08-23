#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int main(){
    cout<<"enter the size of the deque"<<endl;
    int size;
    cin>>size;
    deque<int> d(size);
    cout<<"enter the elements in the deque"<<endl;
    for(int &i:d){
        cin>>i;
    }
    cout<<"the deque"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    d.push_back(100);
    d.push_front(0);
    cout<<endl;

    cout<<"the deque after inserting elements from front and back"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_back();
    d.pop_back();
    d.pop_front();
    cout<<"after removing last two elements and first element";
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    reverse(d.begin(),d.end());
    cout<<"after removing"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<d.empty();



    return 0;
}