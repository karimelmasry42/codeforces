#include <bits/stdc++.h>
using namespace std;
int main() {
  string a;
  cin >> a;
  for (int i = 0; i < a.length(); i++)
    if (a[i] == '0') {
      a.erase(a.begin() + i);
      cout << a;
      exit(0);
    }
  a.pop_back();
  cout << a;
  return 0;
}