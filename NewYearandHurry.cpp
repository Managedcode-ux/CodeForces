#include<iostream>
using namespace std;

int main(){
    int n,k,ini=240,count=0;
    cin>>n>>k;
    ini -= k;
    for(int i=1; i<=n; i++)
    {
        if( (ini -(5*i)) >= 0){
            ini -= (5*i);
            count++;}
        else
            break;
    }
    cout<<count<<endl;;
    return 0;
}