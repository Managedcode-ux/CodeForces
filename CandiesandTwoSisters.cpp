#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int test,num;
    cin>>test;
    while(test)
    {
        cin>>num;
        cout<<(num-1)/2<<"\n";
        test--;
    }
    return 0;
}