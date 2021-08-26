#include<iostream>
using namespace std;

void counter(int a, int b, int diff,int step){
    if(diff >= 10){
        step += diff/10;
        diff = diff%10;
    }
    if(diff <10 && diff>0){
        step += 1;
    }
    cout<<step<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,diff=0,step=0;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        if(a>b){
            diff = a-b;
        } 
        if(b>a){
            diff = b-a;
        }
        counter(a,b,diff,step);
    }
    return 0;
}