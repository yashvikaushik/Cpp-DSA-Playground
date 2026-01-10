#include<iostream>
#include<vector>
using namespace std;
class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			//your code goes here
            int size=nums.size();
            bool sorted=false;
            for(int i=size-1;i>=1;i--){
                if(nums[i-1]<nums[i]){
                    sorted=true;

                }
                else{
                    sorted=false;
                    break;
                }

            }
            return sorted;
		}
};
int main() {
    Solution sol;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    if(sol.isSorted(nums))
        cout << "Array is sorted in increasing order";
    else
        cout << "Array is NOT sorted in increasing order";

    return 0;
}
//this is also the optimal solution time complexity: 0(log n)