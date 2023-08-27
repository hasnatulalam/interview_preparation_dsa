#include<bits/stdc++.h>
using namespace std;
vector<int> targetsumpair(vector<int> &nums,int target){
unordered_map<int,int> mpp;
vector<int> ans(2,-1);
       for(int i =0;i<nums.size();i++){

           int moreneeded=target-num;
           if(mpp.find(moreneeded) != mpp.end()){
               return {mpp[moreneeded],i};
           }
         //  put the element into hashtable for subsequence searches
           mpp[num[i]=i;
       }


return ans;
    }


int main(){
int n;
cin>>n;

vector<int> nums(n);
for(int i=0;i<n;i++){
    cin>>nums[i];
}
int target;
cin>>target;

vector<int> ans=targetsumpair(nums,target);
cout<<ans[0]<<" "<<ans[1]<<endl;


}
