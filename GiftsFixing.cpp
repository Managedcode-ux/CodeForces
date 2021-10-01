#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int test,minA,minB;
    cin>>test;
    while (test--)
    {
        vector<int>a;
        vector<int>b;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int in;
            cin>>in;
            a.push_back(in);
        }

        for(int i=0;i<n;i++){
            int in;
            cin>>in;
            b.push_back(in);
        }

        minA = *min_element(a.begin(),a.end());
        minB = *min_element(b.begin(),b.end());
        long long step=0;
        for (int i = 0; i < n; ++i) {
			step += max(a[i] -minA, b[i] - minB);
		}
		cout << step<< endl;
    }
    
}