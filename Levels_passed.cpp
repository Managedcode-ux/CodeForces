#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
    int n,p,q,a,b;
    vector<int> v1,v2;
    set<int>s;
    cin>>n;
    cin>>p;//size of arr1
    for(int i=0; i<p; i++)
    {
        int in;
        cin>>in;
        v1.push_back(in);
    }
    cin>>q;//size of arr2
    for(int i=0; i<q; i++)
    {
        int in;
        cin>>in;
        v2.push_back(in);
    }

    a=0;//indicator for arr1
    b=0;//indicator for arr2

    while(a<p && b<q)
    {
        if(v1[a] <= v2[b])
        {
            s.insert(v1[a]);
            a++;
        }
        else{
            s.insert(v2[b]);
            b++;
        }
    }
    while(a<p)
    {
        s.insert(v1[a]);
        a++;
    }
    while(b<q)
    {
        s.insert(v2[b]);
        b++;
    }
    if(s.size() == n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
}   