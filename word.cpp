#include<iostream>
using namespace std;
 
int main()
{
    char s[101];
    int len=0,u_case=0, l_case =0;
    cin>>s;
    
    for(int i=0; s[i] !='\0'; i++)
    {
        if(s[i]>=97  && s[i]<=122)
        {
            l_case++;
        }
        else
        {
            u_case++;
        }
    }

    if(u_case > l_case)//converting all the letters to uppercase
    {
        for(int i=0; s[i]!='\0'; i++)
        {
            if(s[i] >= 97 && s[i] <= 122)
            {
                s[i] = s[i]-32;
            }
        }
    }

    else if(u_case < l_case)//converting all the letters to lowercase
    {
         for(int i=0; s[i]!='\0'; i++)
        {
            if(s[i] >= 65 && s[i] <= 90)
            {
                s[i] = s[i]+32;
            }
        }
    }
    else
    {
         for(int i=0; s[i]!='\0'; i++)
        {
            if(s[i] >= 65 && s[i] <= 90)
            {
                s[i] = s[i]+32;
            }
        }
    }
    cout<<s;
}