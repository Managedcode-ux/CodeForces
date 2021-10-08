#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b,side;
        cin>>a>>b;
        side = min(max(a*2,b),max(a,2*b));
        cout<<side*side<<endl;
    }
    return 0;
}