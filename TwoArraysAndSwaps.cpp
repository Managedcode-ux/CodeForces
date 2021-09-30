#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int main(){
    int test;
    cin>>test;
    while (test--)
    {
        int n,k;
        int total=0;
        vector<int>v1,v2;
        cin>>n>>k;
        
        for(int i=0; i<n; i++){
            int in;
            cin>>in;
            v1.push_back(in);
        }

        for(int i=0; i<n; i++){
            int in;
            cin>>in;
            v2.push_back(in);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(), greater<int>());

        for(int i=0; i<k; i++){
            if(v2[i] > v1[i])
                swap(v1[i], v2[i]);
        }

        for(int i=0;i<n; i++){
            total += v1[i];
        }
        cout<<total<<endl;
    }
    
}