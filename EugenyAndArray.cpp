#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int no_elements,no_queries,ele,ones=0,minus_ones=0;
    cin>>no_elements>>no_queries;
    

    for(int i=0;i<no_elements;i++)
    {
        cin>>ele;
        
        ones += (ele == 1);
        minus_ones += (ele == -1); 

    }

    for(int i =1; i<= no_queries; i++)
    {
        int left,right,range;
        cin>>left>>right;

        range = right - (left-1);

        if(range%2 == 0 && ones>=range/2 && minus_ones>=range/2)
            cout<<"1\n";
        else
            cout<<"0\n";
    }

    return 0;
}