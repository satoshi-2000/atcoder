#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c,x,tmp=0;
  int max_a=0,max_b=0,max_c=0;
  int comb_count = 0,sum = 0;

  cin >> a;
  cin >> b;
  cin >> c;
  cin >> x;
  
  /*
   硬貨を選ぶ方法は、下記の組み合わせが考えられる。
   1. 最小単位の50円玉を全て選ぶ方法
   2. 100円玉と50円玉を選ぶ方法
   3. 500円玉と100円玉と50円玉を選ぶ方法

   ここで、500円玉を必要とするのは、X >=500 の時であるため、
   500円未満の組み合わせでは1,2から選択する。

   よって、(A,B,C) = (0,0,k)の組み合わせから始めて、
   B,Cの数を増やして組み合わせの数を数え上げれば良い。
   
  */
 /*

   tmp = x / 50;    // 50円玉の組み合わせのみで選べる最大数
   if (c > tmp){
       max_c = tmp;
   } else{
       max_c = c;
   }

   tmp = x / 100;    // 100円玉の組み合わせのみで選べる最大数
   if (b > tmp){
       max_b = tmp;
   } else{
       max_b= b;
   }

      tmp = x / 100;    // 500円玉の組み合わせのみで選べる最大数
   if (a > tmp){
       max_a = tmp;
   } else{
       max_a= a;
   }
   */

    // 安直に3重for文を回すだけ
    // 添え字に注意
   for(int i = 0; i < a + 1; i++){
       for(int j = 0; j < b + 1; j++){
           for(int k = 0; k < c + 1; k++){
               sum = 500 * i + 100 * j + 50 * k;
               if (sum == x){
                   comb_count++;
               }
           }
       }
   }

  cout << comb_count << endl;

  return 0;
}