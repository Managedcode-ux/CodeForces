#include<iostream>
using namespace std;

int main(){
    int n, point;
    cin>>n>>point;
    int min(point),max(point),ama=0;
    while(--n)
    {
        cin>>point;
        if(point<min){
            min = point;
            ++ama;
        }
        if(point>max)
        {
            max = point;
            ++ama;
        }
    }
    cout<<ama<<"\n";
    return 0;
}