#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reducer(vector<int>&v, int n)
{
    vector<int> st;
    int diff=0;
    if(n == 1){
        cout<<"YES"<<endl;
        return;
    }
    sort(v.begin(), v.end());

    for(int i=1; i<n; i++)
    {
        diff = abs(v[i] - v[i-1]);
        st.push_back(diff);
    }
    sort(st.begin(), st.end(), greater<int>());

    if(st[0] > 1)
        cout<<"NO"<<endl;
    else    
        cout<<"YES"<<endl;
       
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int> v;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int in;
            cin>>in;
            v.push_back(in);
        }

        reducer(v,n);
    }
    return 0;
}