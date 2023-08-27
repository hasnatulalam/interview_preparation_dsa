#include<iostream>
using namespace std;
int sum_digits(int n){
//base case
if(n>=0 & n<=9) return n;
return sum_digits(n/10)+n%10;

}
int main(){

int result =sum_digits(1234);
cout<<result<<endl;
return 0;
}
