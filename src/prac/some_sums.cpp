#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,n,sum=0;
  int sum_digit=0; // 各桁毎の和

  cin >> n >> a >> b ;
  
  for(int i = 1; i < n + 1; i++){      

      //cout << i / 10000 << " " << (i/1000)%10 << " " << (i/100)%10 << " " << (i/10)%10 << " " << i %10 << endl;
      sum_digit = i / 10000 + (i / 1000) % 10 + (i / 100) % 10 + (i / 10) % 10 + i % 10;
      //cout << sum_digit << endl;

      if (a <= sum_digit && sum_digit <= b){          
          sum += i;
      }
  }

  cout << sum << endl;
  return 0;
}