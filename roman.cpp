#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
  // XII;
  unordered_map<char, int> mp = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50},
                                 {'X', 10},   {'V', 5},   {'I', 1}};
  int res = mp[s.back()];
  for (int i = 0; i < s.size(); i++) {
    if (mp[s[i]] < mp[s[i + 1]])
      res = res - mp[s[i]];
    else
      res = res + mp[s[i]];
  }

  return res;
}

int main() {
  string test = "XII";
  int res = romanToInt(test);
  cout << res;
}
