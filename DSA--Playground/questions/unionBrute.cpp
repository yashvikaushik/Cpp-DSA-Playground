#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
       
        set<int> st;
        for(int i=0;i<n1;i++){
            st.insert(nums1[i]);
        }
        for(int i=0;i<n2;i++){
            st.insert(nums2[i]);
        }
         vector<int> ans(st.size());
        int i=0;
        for(auto it: st ){
            ans[i++]=it;
        }

        
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> nums2 = {3, 4, 5, 6};

    int n1 = nums1.size();
    int n2 = nums2.size();

    set<int> st;

    // insert elements of first array
    for(int i = 0; i < n1; i++){
        st.insert(nums1[i]);
    }

    // insert elements of second array
    for(int i = 0; i < n2; i++){
        st.insert(nums2[i]);
    }

    // store union in vector
    vector<int> ans;
    for(auto it : st){
        ans.push_back(it);
    }

    // print result
    cout << "Union of arrays: ";
    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
