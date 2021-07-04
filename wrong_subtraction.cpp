#include<iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    while(k)
    {
        int temp = n%10;
        if(temp != 0 )
            n = n-1;
        else   
            n = n/10;
        k--;
    }
    cout<<n;
}