#include <bits/stdc++.h>
using namespace std;

// Function to calculate the number of set bits.
int hammingWeight(uint32_t n) {
          int count = 0;
       while(n!=0){

           if(n&1){
               count++;
           }
           n=n>>1;


       }
        return count;

    }
