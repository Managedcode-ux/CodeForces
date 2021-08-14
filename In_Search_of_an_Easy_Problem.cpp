#include<iostream>
using namespace std;
int main()
{
    bool b = true;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int in;
        cin>>in;
        if(in == 1)
        {
            b = false;
            break;
        }
    }
    b==false ? cout<<"Hard":cout<<"Easy";
    return 0;
}