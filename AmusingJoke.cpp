#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int  main()
{
    ios_base::sync_with_stdio(false);
    int flag;
    string guest,residence,pile;
    cin>>guest>>residence>>pile;
    
    if((guest.length()+residence.length()) != pile.length()){
        cout<<"NO";
        return 0;
    }
    else{
        guest.append(residence);
        sort(guest.begin(), guest.end());
        sort(pile.begin(), pile.end());
        for(int i=0; i<guest.length(); i++)
        {
            if(guest[i] != pile[i])
            {
                flag=0;
                break;
            }
            else
                flag =1;
        }
    }

    flag==0?cout<<"NO":cout<<"YES";
    return 0;
    
}