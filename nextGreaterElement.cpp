#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> nextGreater(vector<int> &arr, int n)
{
  stack<int> s;
  vector<int> res;
  int curr, prev = INT32_MIN;

  if (n == 1)
  {
    res.push_back(-1);
    return res;
  }

  for (int i = 0; i < n; i++)
  {
    s.push(arr[i]);
  }
  // cout << "STACK SIZE: " << s.size() << endl;

  while (!s.empty())
  {
    curr = s.top();
    s.pop();
    if (prev == INT32_MIN)
    {
      res.push_back(-1);
      prev = curr;
    }
    else if (prev == curr)
    {
      res.push_back(-1);
    }
    else if (prev < curr)
    {
      res.push_back(-1);
      prev = curr;
    }
    else if (prev > curr)
    {
      res.push_back(prev);
      // prev = curr;
      if (s.empty() == false && curr > s.top())
        prev = curr;
    }
  }
  reverse(res.begin(), res.end());
  return res;
}

vector<int> nextGreatertwo(vector<int> &arr, int n)
{
  vector<int> ans(n, -1);

  stack<int> s;

  s.push(arr[n - 1]);

  for (int i = n - 2; i >= 0; i--)

  {

    if (arr[i] < s.top())

    {

      ans[i] = s.top();

      s.push(arr[i]);
    }
    else
    {

      while (!s.empty() && s.top() <= arr[i])

      {

        s.pop();
      }

      if (!s.empty())

      {

        ans[i] = s.top();
      }

      s.push(arr[i]);
    }
  }

  return ans;
}

int main()
{
  // vector<int> vec{9, 3, 6, 5};
  // vector<int> vec{1, 3, 2};
  // vector<int> vec{1, 2, 4, 3};
  // vector<int> vec{3, 1, 5, 3, 9};
  // vector<int> vec{2, 2, 8, 6, 8};
  vector<int> vec{73, 7, 84, 39, 48, 37, 17, 31, 30, 80, 100, 100, 100, 20, 6, 54, 14, 5, 23, 46};
  vector<int> res;
  // res = nextGreatertwo(vec, vec.size());
  res = nextGreater(vec, vec.size());
  // cout << res.size() << endl;
  for (int i = 0; i < res.size(); i++)
  {
    cout << res[i] << " ";
  }
  return 0;
}