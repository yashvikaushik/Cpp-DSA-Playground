#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;

}
void reverse(vector<int>& nums,int start,int end){
    while(start<end){
        swap(nums[start],nums[end]);
        start++;
        end--;    
    }

}
    void rotateArray(vector<int>& nums, int k) {
        int size=nums.size();
        if(size==0){
            return;
        }
        k=k%size;
        if(k==0){
            return;
        }
        reverse(nums,0,k-1);
        reverse(nums,k,size-1);
        reverse(nums,0,size-1);

        





    }
};

int main() {
    Solution sol;

    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter k (positions to rotate): ";
    cin >> k;

    sol.rotateArray(nums, k);

    cout << "Array after left rotation:\n";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
