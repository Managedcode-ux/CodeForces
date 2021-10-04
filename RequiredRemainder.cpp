#include<iostream>
using namespace std;

int main(){
    int t;
	cin >> t;
	while (t--) {
		long long int x, y, n,cnt,ans;
		cin >> x >> y >> n;
        cnt = n/x;
        ans = x*cnt+y;
        if(ans >n){
            ans = ans-x;
        }
		cout<<ans<<endl;
	}
	
	return 0;
}