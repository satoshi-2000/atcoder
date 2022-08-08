#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[200]; 
  int l,i=0,n;
  int max_op = 0;
  bool op_flag = true; // true : 操作続行, false : 操作終了
  
  /*
   1 <= Ai < 10^9 である時、2で割る操作の最大回数は、
   10^9 = 2^x
   log_10(10^9) = log_10(2^x)
   9 = xlog_10(2)
   x = 9 / log_10(2)
   ここで、log_10(2) ≒ 0.301より、
   x ≒ 9 / 0.301
     = 29.9
　　となる。よって小数点を切り捨てれば、最大回数は高々29回に収まる。

  */
  cin >> n;

  // (ここでは末尾までwhile文で回すように記述するが、本例では、N回繰り返せばよい)
  // https://qiita.com/zenrshon/items/cd19361842ae887afe8a (2022/05/08参照)
  // c++の標準入力(行の終わりまで)
  /*
  while(cin >> l){
      a[i] = l;
      cout << a[i];
      i++;
  }
  */
  for(int i = 0; i < n; i++){
      cin >> a[i];
      if (a[i] % 2 == 1){   //  入力例の初期値に奇数が含まれている場合
          op_flag = false;
      }
  }

  
  while(op_flag && max_op < 29){
      for(int i=0; i < n; i++){
        // a[i] = a[i] / 2;
        a[i] /= 2;
        //cout << a[i] << endl;
        
        //cout << "dived by 2\t" << (a[i] % 2) << endl;

        if((a[i] % 2) == 1 || a[i] == 0){  // 置換後の数に奇数が含まれていた場合
            op_flag = false;             // あるいは0が含まれていた場合
        }
      }
      max_op++;
      //cout << "max_op\t" << max_op << endl;
      //cout << "-- while roop --" << endl;
  }

  cout << max_op << endl;

  return 0;
}