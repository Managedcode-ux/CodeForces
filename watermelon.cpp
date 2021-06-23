#include<iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int res = a%2;

    if(a>2 && res == 0)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}
