#include<iostream>
using namespace std;
int main(){
int tk;
cin>>tk;
int base100,base50,base20,base10;

switch(1){
  case(1):base100=tk/100;
                  tk= tk%100;
                  cout<<"toal 100 notes is "<<base100<<endl;
 case(2):base50=tk/50;
          tk=tk%50;
          cout<<"toal 50 notes is "<<base50<<endl;
  case(3): base20=tk/20;
            tk=tk%20;
            cout<<"total 20 notes is "<<base20<<endl;

  case(4): base10=tk/10;
            tk=tk%10;
            cout<<"total 10 notes is "<<base10<<endl;




}



}
