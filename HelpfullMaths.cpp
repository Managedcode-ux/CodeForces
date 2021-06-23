#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string input;
    getline(cin,input);
    int size=input.size();
    sort(input.begin(),input.end());
    for(int i=0; i<size; i++)
    {
        if(input[i] != '+' && i!=size-1)
        {
            cout<<input[i]<<"+";
        }
        if( i== size-1)
        {
            cout<<input[i];
        }
    }   
}
