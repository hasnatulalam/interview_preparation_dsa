#include<iostream>
using namespace std;
int maxi(int arr[],int n)
{

    int max=INT_MIN ;
    for(int i=0;i<n;i++)
    {
       if(arr[i]>max)
       {
         max=arr[i];
       }

    }
    return max;
}
int mini(int arr[],int n)
{

    int min=INT_MAX ;
    for(int i=0;i<n;i++)
    {
       if(arr[i]<min)
       {
         min=arr[i];
       }

    }
    return min;
}
int main()
{

   int size;
   cin>>size;
   int arr[100];
   for(int i=0;i<size;i++)
   {
      cin>>arr[i] ;

   }
   int ans=maxi(arr,size);
   cout<<ans<<endl;
   int answer =mini(arr,size);
   cout<<answer<<endl;
}
