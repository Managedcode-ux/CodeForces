#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a=0,d=0,n;
    string input;
    cin>>n;
    cin>>input;
    for(int i=0; i<n ;i++)
    {
        if(input.at(i) == 'A')
            a++;
        else
            d++;
    }
    if(a>d)
        cout<<"Anton";
    else if(d>a)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}