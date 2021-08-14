#include<iostream>
#include<algorithm>
#include<string>
#include<set>
using namespace std;

int main()
{
    int year,output;
    bool flag = true;
    set<char> result;
    cin>>year;
    while(flag == true)
    {
        output = year+1;
        string s = to_string(output);
        for(char c : s)
        {
            result.insert(c);
        }

        if(result.size() == s.size())
        {   
            cout<<s;
            flag = false;
        }

    }
    return 0;
}


// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
     
// int main()
// {
//     int year,output;
//     cin>>year;
//      while(true)
//      {
//         output = year+1;
//         int a = output / 1000;
//         int b = (output/100)%10;
//         int c = (output/ 10)%10;
//         int d = output%10;
//         if (a != b && a != c && a != d && b != c && b != d && c != d)
//          {
//              break;
//          }
//         }
//        cout<<output;
//     return 0;
// }
