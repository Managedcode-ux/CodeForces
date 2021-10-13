#include<iostream>
using namespace std;

int main(){
    int n,cnt=0,h=0;
    cin>>n;
    while (cnt <= n)
	{
		h++;
		cnt += (h*(h+1))/2;
	}
	cout<<h-1<<endl;
	return 0;

}