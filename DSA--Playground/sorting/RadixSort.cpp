#include<iostream>
#include<vector>
using namespace std;
class RadixSort{
    public:
    int getMax(vector<int>&arr){
        int max=arr[0];
        int n=arr.size();
        for(int i=0;i<n;i++){
           if(arr[i]>max){
            max=arr[i];
           }
        }
        return max;

    }
    void CountSort(vector<int>&arr,int n,int pos){
        vector<int> count(10,0);
        vector<int> new_arr(n);
        for(int i=0;i<n;i++){
            count[(arr[i]/pos)%10]++;
        }
        for(int i=1;i<=10;i++){
           count[i]+=count[i-1];
        }

        for(int i=n-1;i>=0;i--){
            new_arr[--count[(arr[i]/pos)%10]]=arr[i];
        }
        for(int i=0;i<n;i++){
            arr[i]=new_arr[i];
        }
    }

    void radix(vector<int>&arr,int n,int pos){
        int max=getMax(arr);
        for(pos=1;max/pos>0;pos*=10){
            CountSort(arr,n,pos);
        }
    }

};

int main(){
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};

    RadixSort rs;
    rs.radix(arr,8,1);

    cout << "Sorted array: ";
    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
