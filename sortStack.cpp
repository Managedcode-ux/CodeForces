#include <stack>
#include <iostream>
using namespace std;

void sortStack(stack<int> &s)
{
  if (s.empty())
    return;

  int x = s.top();
  s.pop();

  sortStack(s);

  stack<int> tempStack;
  while (!s.empty() && s.top() > x)
  {
    tempStack.push(s.top());
    s.pop();
  }

  s.push(x);

  while (!tempStack.empty())
  {
    s.push(tempStack.top());
    tempStack.pop();
  }
}

int main()
{
  stack<int> s;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int input;
    cin >> input;
    s.push(input);
  }

  sortStack(s);

  while (!s.empty())
  {
    cout << s.top() << endl;
    s.pop();
  }
  return 0;
}