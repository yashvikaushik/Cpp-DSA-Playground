#include<iostream>
#include<vector>
using namespace std;
class Missing{
    public:
    int find(vector<int>&nums){
        int sum1=0;
        int sum2=0;
        for(int i=1;i<nums.size();i++){
            sum1+=i;
        }
        for(int i=1;i<nums.size();i++){
            sum2+=nums[i];
        }
        if((sum1-sum2)==0){
            return 0;
        }

        return sum1-sum2;
    }
};
int main() {
    Missing obj;
    vector<int> nums = {3, 0, 1};   // missing number is 2

    cout << "Missing Number: " << obj.find(nums);

    return 0;
}