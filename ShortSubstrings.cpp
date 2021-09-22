#include<iostream>
#include<string>
using namespace std;

int main(){
    string in;
    int test,len;

    cin>>test;
    while(test>0){
        cin>>in;
        len = in.length();
        for(int i=0; i<len; i++){
            if(i==0){
                cout<<in[i];
            }
            if(i%2 != 0 && i!=0){
                cout<<in[i];
            }
        }
        cout<<endl;
        test--;
    }
    return 0;
}