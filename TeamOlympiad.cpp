#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a,b, stu[4][50001], cat[4],ans;
    cin>>a;
    for(int i=1; i<=a; i++){
        cin>>b;
        stu[b][cat[b]++] = i;
    }
    ans = min(cat[1],min(cat[2],cat[3]));
    cout<<ans<<endl;

    for(int i=0; i<ans; i++){
        cout<<stu[1][i]<<" "<<stu[2][i]<<" "<<stu[3][i]<<endl;
    }
}