#include<iostream>
#include<string.h>

int main()
{
    std::string s1;
    std::getline(std::cin,s1);

    if(s1[0]>=97 && s1[0]<=122)
    {
        s1[0] -= 32 ;
    }

    std::cout<<s1;
}