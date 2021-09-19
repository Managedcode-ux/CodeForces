#include<iostream>
using namespace std;

int main()
{
    int n,sum=0,un=0;
    cin>>n;
    while(n--){
        int input;
        cin>>input;
        if(input > 0){
            sum += input; 
        }
        else if(input == -1 && sum>0){
            sum--;
        }
        else{
            un++;
        }
    }
    cout<<un;
}