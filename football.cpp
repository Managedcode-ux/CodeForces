#include<iostream>
#include<string>
using namespace std;

int main()
{
    string in;
    int count=1;
    cin>>in;
    for(int i=1; i<=in.length(); i++){
        if(in[i] == in[i-1]){
            count++;
            if(count==7){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else{
                count=1;
            }
    }
   cout<<"NO"<<endl;

    return 0;
}