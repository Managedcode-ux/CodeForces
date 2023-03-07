#include <iostream>
#include <string>
#include <map>
using namespace std;

bool isValidParentheses(string expression)
{
  string st;
  map<char, char> mp;

  mp['('] = ')';
  mp['{'] = '}';
  mp['['] = ']';

  st.push_back(expression[0]);
  for (int i = 1; i < expression.size(); i++)
  {
    if (mp[st.back()] == expression[i])
      st.pop_back();
    else
      st.push_back(expression[i]);
  }

  return st.empty() ? true : false;
}

int main()
{
  string exp = "[(])";
  bool result = isValidParentheses(exp);
  cout << result << endl;
  return 0;
}