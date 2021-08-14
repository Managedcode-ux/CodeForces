#include<iostream>
using namespace std;

int main()
{
    int test,a,b,rem;
    cin>>test;
    
    while(test)
    {
        cin>>a>>b;
        if(a%b == 0)
            cout<<"0"<<endl;
        else if(a>b)
        {
            rem = a%b;
            cout<<b-rem<<endl;
        }
        else
        {
            cout<<b-a<<endl;
        }
        test--;
    }
}