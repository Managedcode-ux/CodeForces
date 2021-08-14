#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
int main()
{
    int n,a[110];
    cin>>n;
    double result=0.0,sum=0.0;
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
        sum += a[i]; 
    }
    result = sum/n;
    cout<<fixed<<setprecision(12)<<result<<endl;
    
}