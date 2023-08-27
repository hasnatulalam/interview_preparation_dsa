#include<iostream>
using namespace std;
int pow(int p,int q){
if(q==0) return 1;
if(q%2==0){
    int ans =pow(p,q/2);
    return ans*ans;
}else{
  int ans =pow(p,q/2);
  return p*ans*ans;

}

}
int main(){

int result =pow(2,5);
cout<<result<<endl;


}
