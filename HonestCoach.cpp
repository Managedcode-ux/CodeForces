#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> st;
        for(int i=0; i<n ;i++){
            int in;
            cin>>in;
            st.push_back(in);
        }

        sort(st.begin(), st.end());
        int result = st[n-1]-st[0];

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                result = min(result, st[j]-st[i]);
            }
        }
        cout<<result<<endl;
    }
    return 0;
}