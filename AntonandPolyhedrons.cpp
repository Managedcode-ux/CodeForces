#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n,sum;
    cin>>n;
    sum=0;
    while(n){
        string input;
        cin>>input;
        if(input == "Tetrahedron")
            sum +=4;
        if(input == "Cube")
            sum +=6;
        if(input == "Octahedron")
            sum += 8; 
        if(input == "Dodecahedron")
            sum += 12; 
        if(input == "Icosahedron" )
            sum += 20; 
        n--;
    }
    cout<<sum;
}