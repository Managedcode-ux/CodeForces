#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string in1,in2,flag="YES";
    int i=0,j;
    cin>>in1>>in2;
    reverse(in2.begin(),in2.end());
    if(in1 != in2)
    {
        flag="NO";
    }
    cout<<flag;
    return 0;
}