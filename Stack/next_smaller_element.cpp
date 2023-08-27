#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nse(vector<int> &arr){
int n=arr.size();
vector<int> output(n,-1);
stack<int> st; //storing index;
st.push(0);
for(int i =1;i<n;i++){
    while(!st.empty() && arr[i]< arr[st.top()]){
        output[st.top()]=arr[i];
        st.pop();
    }
    st.push(i);

}
while(!st.empty()){
    output[st.top()]=-1;
    st.pop();
}
return output;

}

int main(){
int n;
cin>>n;
vector<int> v;
while(n--){
    int x;
    cin>>x;
    v.push_back(x);

}
vector<int> result=nse(v,n);
for(int i =0;i<result.size();i++){
    cout<<result[i]<<" ";
}


}
