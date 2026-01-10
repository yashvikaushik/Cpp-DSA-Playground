#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size=nums.size();
        set<int> st;
        for(int i=0;i<size;i++){
            st.insert(nums[i]);
        }
        int i=0;
        for(int x:st){
         nums[i++]=x;
        }
        return i;
        
        
    }
};
int main() {
    Solution sol;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums;
    nums.reserve(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int k = sol.removeDuplicates(nums);

    cout << "After removing duplicates:\n";
    cout << "Number of unique elements: " << k << endl;
    cout << "Elements: ";

    for(int i = 0; i < k; i++){
        cout << nums[i] << " ";
    }

    return 0;
}
