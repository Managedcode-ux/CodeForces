#include<iostream>
using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;

    for(int x=1; x<10; x++){
        if((k*x%10)==0){
            cout<<x;
            break;
        }
        else if((k*x%10) == r){
            cout<<x;
            break;
        }
    }
    return 0;
}