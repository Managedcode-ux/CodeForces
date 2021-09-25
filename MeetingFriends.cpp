#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int loc[3],trav=0;
    for(int i=0; i<3; i++){
        cin>>loc[i];
    }

    sort(loc,loc+3);
    
    trav = (loc[1]-loc[0]) + (loc[2]-loc[1]);
    cout<<trav;
}