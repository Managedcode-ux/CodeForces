#include<iostream>
#include<string>

int main()
{

    std::string input;
    int num,X=0;
    std::cin>>num;
    while(num--)
    {
        std::cin >>input;
        if(input[1] == '+')
            X++;
        else
            X--;    
    }
    std::cout<<X;
    return 0;
}
