#include<iostream>
#include<array>
using namespace std;
int main()
{

    array<int 4> a={2,3,4,5};
    int size =a.size();
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2nd index"<<a.at[2]<<endl
    cout<<"Empty or not"<<a.empty()<<endl;
    cout<<"first element"<<a.front()<<endl;
    cout<<"Last Element"<<a.back()<<endl;
}
