#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int atoi(string str)
{
  bool isneg = false;
  int num = 0;
  string temp;
  stringstream ss;
  // cout << str[0];

  // if (str[0] == '-')
  // {
  //   isneg = true;
  // }

  for (int i = 0; i < str.length(); i++)
  {
    cout << "str[i] ==>" << str[i] << endl;
    if (str[i] == '-')
      isneg = true;
    if (str[i] >= 48 && str[i] <= 57)
      temp += str[i];
    else
      continue;
  }
  cout << "temp ==>" << temp << "\n";

  ss << temp;
  ss >> num;

  if (isneg)
  {
    num = num * (-1);
  }
  return num;
}

int main()
{
  string st = "words and 987";
  int res;
  res = atoi(st);
  cout << res;
  return 0;
}