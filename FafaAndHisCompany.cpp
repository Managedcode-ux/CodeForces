#include<iostream>
using namespace std;

int main(){
     long long int n,leftover,count=0,leader=0;
     cin>>n;

     for(leader=1; leader<=n/2 ; leader++){
         leftover = n-leader;
         if(leftover%leader == 0){
             count++;
         }
     }
     cout<<count;
}