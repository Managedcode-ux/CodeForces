#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int test;

    cin>>test;
    while(test--){
        int size,j,k;
        vector<int>v;
        int mid;
        cin>>size;
        for(int i=0; i<size; i++){
            int in;
            cin>>in;
            v.push_back(in);
        }
        mid = size/2;
        j=0;
        k=v.size()-1;
        
        while(j<=mid && k>=mid){
            if(j==k){
                cout<<v[j]<<" ";
                j++;
                k--;
            }
            else{
                cout<<v[j]<<" "<<v[k]<<" ";
                j++;
                k--;
            }
        }
        cout<<endl;
       
    }
}