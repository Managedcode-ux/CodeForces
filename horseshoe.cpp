#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
    int a[4],i=0;
    for(i=0 ;i<4;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    cout<<4-s.size()<<endl;
}