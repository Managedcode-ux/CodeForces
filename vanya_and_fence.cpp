// #include<iostream>
// using namespace std;

// int main()
// {
//     int num,height,count =0;
//     int arr[1000];
//     cin>>num>>height;
//     for(int i=0; i<num;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0; i<num;i++)
//     {
//         if(arr[i] > height)
//         {
//             count =count+2;
//         }
//         else
//             count++;
//     }
    
//     cout<<count;
// }

#include<iostream>
using namespace std;

int main()
{
    int num,height,count =0;
    cin>>num>>height;
    for(int i=0; i<num;i++)
    {
        int input;
        cin>>input;
        if(input > height)
        {
            count =count+2;
        }
        else
            count++;
    }
    cout<<count;
}
