#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if (a == 1)
    a = 2;
  for (int i = a; i <= b; i++) {
    int num = 0;
    for (int n = 2; n < i; n++) {
      if (i % n == 0)
        num++;
    }
    if (num == 0)
      cout << i << endl;
  }
}