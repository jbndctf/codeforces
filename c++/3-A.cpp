#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
  string s;
  string t;
  cin >> s;
  cin >> t;
  int hdiff = t.at(0) - s.at(0);
  int vdiff = t.at(1) - s.at(1);
  int moves = max(abs(hdiff), abs(vdiff));
  cout << moves << endl;
  while (hdiff != 0 || vdiff != 0) {
    if (hdiff > 0) {
      cout << "R";
      hdiff--;
    }
    if (hdiff < 0) {
      cout << "L";
      hdiff++;
    }
    if (vdiff > 0) {
      cout << "U";
      vdiff--;
    }
    if (vdiff < 0) {
      cout << "D";
      vdiff++;
    }
    cout << endl;
  }
  return 0;
}
