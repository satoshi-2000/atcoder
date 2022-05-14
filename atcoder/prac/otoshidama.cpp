#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
using namespace std;
using std::vector; using std::any_of;

  // 
  /*
  10,000円札の枚数をa, 5,000円札の枚数をb, 1,000円札の枚数をcと置くとき、
  (1)a + b + c = n
  かつ
  (2)10,000a + 5,000b + 1,000c = y
  を満たすような (a,b,c)が存在するかどうかを調べれば良い。

  この組み合わせを調べるにあたって、次の順序に従って処理を行う。
  1. (1)の組み合わせを満たすような(a,b,c)を求める。
  2. 1で求めた組み合わせ(a,b,c)について、(2)を満たすかどうかを判定する。
  3. 2を繰り返し、条件を満たす組み合わせが見つかった時点で終了する。なければ(-1,-1,-1)を返す。
  */


int main() {
  int n,y;
  bool isLie = false; // True : 嘘をついている
  int a = 0,b = 0,c; 
  int sum = 0;
  
   cin >> n >> y;
   c = n;


  // (0,0,20) -> (0,1,19) でk--だとなるけれど、この表記だと20 * 20 * 20をやることになる
  // a の値を固定して、b,cの値を変化させる形でroop
   for (int i = 0; i < n + 1 && !isLie; i++){
       a = i;   // 分かりやすさのため、iとcを読み替える
       c = n - a; // 例えば、n=20, a=1の時、 c =19 (a,b,c)=(1,0,19)でスタート
       
       for (int j = 0; j < n - a + 1 && !isLie; j++){
           b = j;
           sum = 10000*a + 5000*b + 1000*c;

           //cout << "a\t" << a << "b\t" << b << "c\t" << c << endl; // for debug
           if(y == sum){
               isLie=true;
               break;
           }
           c--;
       }

   }

   if(isLie){
       cout << a << " " << b << " " << c << endl;
   } else {
       cout << -1 << " " << -1 << " " << -1 << endl;
   }
  return 0;
}