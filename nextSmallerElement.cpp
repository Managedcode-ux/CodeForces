#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> NSE(vector<int> &a, int n)
{
  vector<int> ans(n, -1);
  stack<pair<int, int>> s;

  for (int i = 0; i < n; i++)
  {
    int next = a[i];

    if (s.empty())
    {
      s.push({next, i});
      continue;
    }

    while (!s.empty() && (s.top().first) > next)
    {
      ans[s.top().second] = next;
      s.pop();
    }

    s.push({next, i});
  }

  return ans;
}

int main()
{
  int n;
  vector<int> v;
  vector<int> res;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int input;
    cin >> input;
    v.push_back(input);
  }

  res = NSE(v, n);
  for (int i = 0; i < res.size(); i++)
  {
    cout << res[i] << endl;
  }
}