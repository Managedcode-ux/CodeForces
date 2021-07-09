#include<iostream>
using namespace std;

int main()
{
    int n,in,out,total=0,min=0,i=1;
    cin>>n;
    while(i<=n)
    {
    cin>>out>>in;
    //min = total;
    total = (total-out)+in;
    if(min < total)
    {
        min = total;
    }
    i++;
    }
    cout<<min;
}