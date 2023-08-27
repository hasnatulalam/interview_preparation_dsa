#include<iostream>
#include<stack>
using namespace std;
void removeAtAnyIndexBottom(stack<int> &st,int idx){
stack<int> temp;
int n=st.size();
int cnt =0;
while(cnt<n-idx-1){
    cnt++;
    int curr=st.top();
    st.pop();
    temp.push(curr);

}
st.pop();
while(!temp.empty()){
int curr=temp.top();
temp.pop();
st.push(curr);

}


}
int main(){
 stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
   removeAtAnyIndexBottom(st,2);
      while(not st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<" ";

    }
return 0;
}
