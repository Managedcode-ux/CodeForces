#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  vector<string> st = {"coding ", "codezen", "codingninja", "coder"};
  string ans;
  int n = st.size();
  sort(st.begin(), st.end());
  string a = st[0];
  string b = st[n - 1];
  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] == b[i])
    {
      ans = ans + a[i];
    }
    else
      break;
  }
  for (int i = 0; i < st.size(); i++)
  {
    cout << st[i] << endl;
  }
  cout << ans << endl;
}