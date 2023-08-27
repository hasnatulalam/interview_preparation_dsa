#include<iostream>
#include<stack>
using namespace std;
bool isValidBrackets(string str){
  stack<char> st;
  for(int i =0;i<str.size();i++){
    char ch=str[i];  //current character
    if(ch=='(' || ch=='{' || ch=='['){
        st.push(ch);
       }else{
         //closing bracket
         if(ch==')' && !st.empty() && st.top()=='('){
            st.pop();
         }else if(ch=='}' && !st.empty() && st.top()=='{'){
         st.pop();
         }else if(ch==']' && !st.empty() && st.top()=='['){
           st.pop();
         }else{
             return false;
           }


       }
  }

   return st.empty();
}

int main(){
    string str="()()(())";
    cout<<isValidBrackets(str)<<"\n";
    return 0;


}
