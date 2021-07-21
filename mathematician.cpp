#include<iostream>
#include<string>
using namespace std;

int main()
{
    int sum,num1,num2;
    string s1,s2,result;
    cin>>s1>>s2;
    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i] == s2[i])
        {
            result.append("0");
        }
        else    
            result.append("1");
    }
    cout<<result<<endl;
}