#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    char queue[50];
    int n,t;
    
    cin>>n>>t;

    for(int i=0; i<n; i++)
    {
        cin>>queue[i];
    }
    cout<<endl;

    while(t--)
    {
        for(int i=1; i<n; ++i)
        {
            if(queue[i] == 'G' && queue[i-1] == 'B')
                {
                    queue[i] = 'B';
                    queue[i-1] = 'G';
                    ++i;
                }

        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<queue[i];
    }
}
