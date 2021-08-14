#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    vector<int>h(n),a(n);
    for(int i=0; i<n; i++)
    {
        cin>>h[i]>>a[i];
        
        for(int j=0; j<i;j++)
        {
            if(h[i]==a[j])
                count++;
            if(a[i]==h[j])
                count++;
        }
    }
    cout<<count;
    return 0;
}