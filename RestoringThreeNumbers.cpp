#include<iostream>
using namespace std;

int main(){
    long long int merge=0;
    long long int num[4];
    for(int i=0; i<4; i++){
        cin>>num[i];
        merge += num[i]; 
    }
    merge = merge/3;

    for(int i=0; i<4; i++){
        int diff = merge-num[i];
        if(diff != 0)
            cout<<diff<<" ";
    }
}