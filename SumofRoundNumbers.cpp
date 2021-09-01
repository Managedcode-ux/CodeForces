#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t,count;
    cin>>t;
    while(t--){
        count=0;
        vector<int>v;
        int n;
        cin>>n;
        if(n>=10000){
            count++;
            v.push_back(10000);
            n = 0;
        }

        if(n>=1000 && n<10000)
        {
            if(n%1000 == 0){
                count++;
                v.push_back(n);
                n = n%1000;
            }
            else{
            count++;
            v.push_back(n - (n%1000));
            n = n%1000;}
        }

        if(n>=100 && n<1000){
            if(n%100 ==0){
                count++;
                v.push_back(n);
                n = n%100;
            }
            else{
                count++;
                v.push_back(n - (n%100));
                n = n%100;
            }
        }

        if(n>=10 && n<100)
        {
            if(n%10 ==0)
            {
                count++;
                v.push_back(n);
                n = n%10;
            }
            else{
                count++;
                v.push_back(n- (n%10));
                n = n%10;
            }
        }

        if(n>0 && n<10){
            count++;
            v.push_back(n);
            n=0;
        }

        if(n==0){
            cout<<count<<endl;
            for(auto i = v.begin(); i<v.end(); i++)
                cout<<*i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}