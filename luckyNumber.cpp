#include<iostream>
#include<string>
using namespace std;

int main()
{
    int count=0;
    string input;
    cin>>input;
    for(int i=0; i<input.length(); i++)
    {
        if(input[i] == '4' || input[i] == '7')
        {
            count++;
        }
    }

    if(count == 4 || count ==7)
    {
            cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}