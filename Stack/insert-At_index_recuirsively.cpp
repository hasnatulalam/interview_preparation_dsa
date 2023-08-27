#include<iostream>
#include<stack>
using namespace std;
void f(stack<int> &st,int x,int idx){
   int n=st.size();


if(st.size()==idx){
    st.push(x);
    return ;
} ;

int curr=st.top();
st.pop();
f(st,x,idx);
st.push(curr);

}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    f(st,100,2);
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<" ";

    }
    return 0;


}
