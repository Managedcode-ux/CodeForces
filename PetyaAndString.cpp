#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int count=0,sum1=0,sum2=0;
    string a , b;
    getline(cin, a);
    getline(cin, b);
    int size = a.size(); 
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    int result = a.compare(b);

    if(result==0)
    {
        count=0;
    }

    else if(result < 0)
    {
        count=-1;
    }

    else
    {
        count=1;
    }

    cout<<count<<endl;
}
