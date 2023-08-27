#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int calc(int v1,int v2,char op){
if(op=='^'){
  return pow(v1,v2);
}
if(op=='*'){
    return v1*v2;
}
if(op=='/'){
    return v1/v2;
}
if(op=='+'){
    return v1+v2;
}
return v1-v2;
}
int precedence(char ch){
if(ch=='^') return 3;
 else if(ch=='*' || ch=='/') return 2;
 else if(ch=='+' ||ch=='-') return 1;
 else return -1;


}
int eval(string &str){
 stack<int> nums;
 stack<char> oper;
 for(int i =0;i<str.size();i++)
    {
        if (str[i]>='0' && str[i]<='9')
        {
            // if the char is a digit, insert it into the operand stack
            nums.push(str[i] - '0');
        }
        else if (str[i] == '(')
        {
            // if the char is an opening bracket, push it into the operator stack
            oper.push('(');
        }
        else if (str[i] == ')')
        {
            // loop till you don't encounter the corresponding opening bracket
            while (oper.top() != '(')
            {
                // take out the operator on the top of the operator stack
                char op = oper.top();
                oper.pop();


                // take out the top 2 values from the operand stack
                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();


                // push the result of applying the operator on val1 and val2 into the nums stack
                nums.push(calc(v1, v2, op));
            }
            oper.pop();
        }
        else
        {
            // loop till the operator on top of operation stack has a higher precedence than the current operator
            while (oper.size() && precedence(oper.top()) >= precedence(str[i]))
            {
                // take out the operator on the top of the operator stack
                char op = oper.top();
                oper.pop();


                // take out the top 2 values from the operand stack
                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();


                // push the result of applying the operator on val1 and val2 into the nums stack
                nums.push(calc(v1, v2, op));
            }
            oper.push(str[i]);
        }
    }


    // loop till you have operations left to perform
    while (oper.size())
    {
        // take out the operator on the top of the operator stack
        char op = oper.top();
        oper.pop();


        // take out the top 2 values from the operand stack
        int v2 = nums.top();
        nums.pop();
        int v1 = nums.top();
        nums.pop();


        // push the result of applying the operator on val1 and val2 into the nums stack
        nums.push(calc(v1, v2, op));
    }
    return nums.top();
}

int main(){
 string str="1+(2*(3-1))+2";
 cout<<eval(str)<<endl;
}


