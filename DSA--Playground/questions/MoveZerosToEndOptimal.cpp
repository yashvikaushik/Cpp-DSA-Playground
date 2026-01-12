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
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        int j=-1;
        //find the first zero and that would be j and i would be the next element after j
       for(int i=0;i<size;i++){
        if(nums[i]==0){
            j=i;
            break;
        }

       }

       for(int i=j+1;i<size;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
       }
        
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sol.moveZeroes(nums);

    cout << "Array after moving zeroes:\n";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}