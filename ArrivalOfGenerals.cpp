#include<iostream>
#include<vector>
using namespace std;

int main()
{
   int n;
   int maxval=0;
   int minvalue =1000;
   int maxindex=0;
   int minindex=0;

   cin>>n;
   for(int i=1; i<=n; i++)
   {
       int in;
       cin>>in;

       if(in>maxval)
       {
           maxval = in;
           maxindex = i;
       }

       if(in<=minvalue)
       {
           minvalue = in;
           minindex  =i;
       }
   }

   if(maxindex>minindex)
   {
       cout<<(maxindex-1)+(n-minindex)-1;
   }

   else
   {
       cout<<(maxindex-1)+(n-minindex);
   }
}