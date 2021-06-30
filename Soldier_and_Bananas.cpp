#include<iostream>

using namespace std;

int main()
{
    int initial_price,money_avail,req_quantity,total_price=0;

    cin>>initial_price>>money_avail>>req_quantity;

    for(int i=1; i<=req_quantity; i++)
    {
        total_price += i*initial_price; 
    }

    if(total_price > money_avail)
    {
        cout<<total_price - money_avail<<endl;
    }
    else
        cout<<"0";

    return 0;
}