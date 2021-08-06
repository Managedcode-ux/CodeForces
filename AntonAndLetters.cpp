#include<iostream>
#include<string>
#include<set>
using namespace std;

int main()
{
    string input;
    set<char>s;

    getline(cin,input);
    
    for(int i=0; i<input.length(); i++)
    {
        if(input[i] != '{' && input[i] !=' ' && input[i] !='}' && input[i] !=',')
        {
            s.insert(input[i]);
        }
    }
    
    for(auto i= s.begin(); i!=s.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<s.size();
}