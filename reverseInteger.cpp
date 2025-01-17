#include <climits>
#include <iostream>
using namespace std;

int reverse(int n) {
  int ans = 0;
  while (n != 0) {
    int digit = n % 10;
    if (ans > INT_MAX / 10 || ans < INT_MIN / 10) {
      return 0;
    }
    ans = ans * 10 + digit;
    n = n / 10;
  }
  return ans;
}
int main() {
  int n = 12345;
  int ans = reverse(n);
  cout << ans << endl;
  return 0;
}

