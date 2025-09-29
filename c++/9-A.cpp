#include <iostream>
using namespace std;
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
  unsigned int y, w;
  cin >> y >> w;
  int m = max(y, w);
  int num = 6 - m + 1;
  int den = 6;
  int g = gcd(num, den);
  cout << num / g << "/" << den / g << endl;
  return 0;
}
