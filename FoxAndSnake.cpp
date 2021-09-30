#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0; i<n*m; i++)
    {
        if(i == 1)
            cout<<"#";
        if(i !=1 && i<m)
        {
            cout<<"#";
        }
        if(i == m && i<n)
        {
            for(int j=0; j<2; j++)
                cout<<"#";
        }
    }
}