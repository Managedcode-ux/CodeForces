#include<iostream>
using namespace std;

int main()
{
    int test;
    long long int n,sum1,sum2,d,i,j;

    cin>>test;
    while(test--){
        sum1=sum2=0;

        cin>>n;
        if(n%4 != 0){
            cout<<"No\n";
        }
        else{
            cout<<"YES\n";
            for(int i=2; i<=n; i+=2){
                cout<<i<<" ";
                sum1+=i;
            }
            for(int i=1; i<n-2;i+=2){
                cout<<i<<" ";
                sum2 += i;
            }
            cout<<sum1-sum2<<"\n";
        }
    }
}