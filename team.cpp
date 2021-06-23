#include<iostream>
using namespace std;

int main()
{
    int n, attempt=0;
    cin>>n;
    while(n>0){
        int team[3],pos=0;
        for(int i=0; i<3; i++)
        {

            cin>>team[i];

            if(team[i] == 1)
                {
                    pos++;
                }
        }
        if(pos >= 2)
        {
            attempt++;
        }

        n--;
    }
    cout<<attempt;

}
