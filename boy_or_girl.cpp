/*#include<iostream>
#include<string>
#include<iterator>
#include<set>

using namespace std;

int main()
{
    int total;
    set<char>  distinct ;
    string input;
    
    getline(cin,input);
    
    for(int i=0; i<=input.length();i++)
    {
        distinct.insert(input[i]);
    }
    total = distinct.size();
    cout<<total<<endl;

    for(auto i=distinct.begin(); i!= distinct.end();i++)
    {
        cout<<" "<<*i;
    }
    cout<<endl;

    if(total/2 == 0)
    {
        cout<<"CHAT WITH HER!";
    }

    else{
        cout<<"IGNORE HIM!";
    }
}*/



#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int count =0;
    string input;
    cin>>input;
    sort(input.begin(),input.end());
    for(int i=0; i<input.length();i++)
    {
        if(input[i] != input[i+1])
        {
            count++;
        }
    }

    if(count%2 == 0)
    {
        cout<<"CHAT WITH HER!\n";
    }

    else
    {
        cout<<"IGNORE HIM!\n";
    }
}