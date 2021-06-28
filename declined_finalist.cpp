#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<long long int>final;
    int k,input;

    cin>>k;
    for(int i=1; i<=k;i++)
    {
        cin>>input;
        final.push_back(input);
    }

    sort(final.begin(),final.end());

    if(final.back() <= 25)
        cout<<"0";
    else    
        cout<<final.back()-25;
   


    // for(auto i=0;i<final.size();i++)
    // {
    //     cout<<final[i]<<" ";
    // }
    

    return 0;
}