#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin  >> a >> b;
  for (int i = a; i <= b; i++) {
    int sum=0;
    for (int n = 2; n < i; n++) {
      if(i % n == 0) sum++;
    }
    if(sum == 0) cout << i << endl;
  }
}