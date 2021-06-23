#include<iostream>
#include<string>
using namespace std;

int main()
{
    string input;
    int n;

    cin>>n;
    while(n>=0)
    {

        getline(cin,input);

        int len = input.size();

        if(len>10)
        {
            string res = to_string(len-2);
            char s1 = input[0];
            char s2 = input[len-1];
            string final = s1+res+s2;
            cout<<final<<"\n";
        }

        else
        {
        cout<<input<<"\n";
        }
        n--;
    }

}
