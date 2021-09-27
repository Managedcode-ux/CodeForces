#include<iostream>

using namespace std;

int main(){
    int n,k,selected,allowed=0;
    
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>selected;
        
        if(selected +k <=5){
            allowed++;
        }
    }

    cout<<(allowed/3);
}    