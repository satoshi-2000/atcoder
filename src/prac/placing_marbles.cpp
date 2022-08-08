#include <bits/stdc++.h>
using namespace std;

int main() {
  int a; 

  int s1,s2,s3;

  // 1桁の入力を桁毎に分割して考えれば良い
  cin >> a;

  s1 = a / 100; // 1桁目

  s2 = (a / 10) % 10; // 2桁目

  s3 = a % 10; // 3桁目

  cout << s1 + s2 + s3 << endl;

  return 0;
}