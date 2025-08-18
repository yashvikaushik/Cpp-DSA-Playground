#include <iostream>
using namespace std;
class SqureRoot{
    public:
    int root(int num){
        int ans=-1;
        int start=0;
        int end=num;
        int mid=(start+end)/2;
        while(start<=end){
            
            if(mid*mid == num){
                return mid;
            }
            else if(mid*mid < num){
                ans=mid;
                start=mid+1;
            }
            else if(mid*mid > num){
               end=mid-1;
            }
            mid=(start+end)/2;

        }
        return ans;
    }
};
int main(){
    SqureRoot obj;
    cout<<"Enter a number"<<endl;
    int num;
    cin>>num;
    int root=obj.root(num);
    cout<<root<<endl;
    return 0;
}