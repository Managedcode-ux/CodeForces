#include<iostream>
using namespace std;

int main()
{
    int size, cut_off,count =0;
    cin>>size;
    int arr[size];
    cin>>cut_off;

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];

    }

    for(int i=0; i<size; i++)
    {
        if(arr[i] >= arr[cut_off-1] && arr[i]>0)
            count++;
    }

    cout<<count;
    return 0;
}
