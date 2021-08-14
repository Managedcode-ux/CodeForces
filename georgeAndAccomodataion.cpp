#include<iostream>
using namespace std;

int main()
{
    int count=0,n,occ,limit;
    cin>>n;
    while(n)
    {
        cin>>occ>>limit;
        if(limit-occ>=2)
        {
            count++;
        }
        n--;
    }
    cout<<count;
}