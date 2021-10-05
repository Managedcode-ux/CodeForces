#include<iostream>
#include<vector>
using namespace std;

int main(){
    int test,a,b;
    cin>>test;
    
    while(test--){
        a=0,b=0;
        int size;
        cin>>size;

        for(int i=0; i<size; i++){
            int x;
            cin>>x;

            if(x%2 != i%2){
                if(i%2 ==0){
                    a++;
                }
                else{
                    b++;
                }
            }
        }

        if(a!=b)
            cout<<-1<<endl;
        else
            cout<<a<<endl;

    }
}
