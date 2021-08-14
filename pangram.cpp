#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int n,flag;
    char t = 'a';
    cin>>n;
    string input;
    cin>>input;
    int length = input.length();
    transform(input.begin(),input.end(),input.begin(),::tolower);
    if(length>=26)
    {
        for(int i=0; i<26; i++)
        {
            if(input.find(t) !=-1)
            {
                t++;
            }
            else
            {
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}




