#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,mx = INT32_MIN,ct=0;
    vector<int> v;
    cin>>n;
    for(int i=0; i<n; i++){
        int in;
        cin>>in;
        v.push_back(in);
    }

    for(int i=0; i<n; i++){
        if(v[i] > mx){
            mx = v[i];
        }
    }

    for(int i=0; i<n; i++){
        if(v[i] < mx){
            ct +=mx-v[i];
        }
    }

    cout<<ct;

}