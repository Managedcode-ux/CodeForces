// #include<iostream>
// #include<string>
// using namespace std;


// int main()
// {
//     int n,count=0;
//     string in;
    
//     cin>>n;
//     cin>>in;
  
    
//     for(int i=1; i<=in.length(); i++)
//     {
//         if(in[i] == in[i-1] || in[i] == in[i+1])
//         {
//             count++;
//         }
//     }

//     cout<<count;

// }


#include <iostream>
using namespace std;

int main() {
    string b;
    int a, c;
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        if (b[i] == b[i + 1]) {
            c++;
        }
    }
    cout << c;
}