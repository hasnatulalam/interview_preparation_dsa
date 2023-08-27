#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &st,int x,int idx){
stack<int> temp;
int n=st.size();
int cnt =0;
while(cnt<n-idx){
    cnt++;
    int curr=st.top();
    st.pop();
    temp.push(curr);

}
st.push(x);
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
    insertAtBottom(st,100,3);
      while(not st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<" ";

    }
return 0;
}
