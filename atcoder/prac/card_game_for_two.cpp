#include <bits/stdc++.h>
#include <vector>
using namespace std;
// https://docs.microsoft.com/ja-jp/cpp/cpp/namespaces-cpp?view=msvc-170(2022/05/08参照)
// 名前空間に関して

int main() {
  int a,n;
  int a_sum = 0, b_sum = 0;

  cin >> n ;
  vector<int> v(n); 
  // https://cpprefjp.github.io/reference/vector/vector.html (2022/05/08参照)
  // https://blog.foresta.me/posts/cpp_standard_input_for_competition/ (2022/05/08参照)

  v.reserve(n);
  for (int i {0}; i < n; i++){
      cin >> a;
      v.push_back(a);
  }

  // 下記の記述方法で降順ソート(デフォルトは昇順ソートで、「std::greater<int>()」を付けると降順になる )
  // https://kaworu.jpn.org/cpp/std::sort#.E9.99.8D.E9.A0.86.E3.81.A7.E3.82.BD.E3.83.BC.E3.83.88.E3.81.99.E3.82.8B.E4.BE.8B (2022/05/08参照)
  std::sort(v.begin(),v.end(),std::greater<int>() );

  /*
  Aliceは最大化するようにカードを取るため、最大値のカードから順に取るはずである。
  よって、カードの値を最大値順に整列して、始めの数から取れば良い。
  また、カードの数はN枚として与えられるため、残りの枚数が0になった時点で終了すれば良い。
  ここで、Aliceがカードを引いて、Bobが引くときには0枚になる場合に注意する必要がある注意する必要がある。
  */

   for(int i = 0; i < n; i++){
       if(i % 2 == 0){
           a_sum += v[i];
       } else{
           b_sum += v[i];
       }
   }

   cout << a_sum - b_sum << endl;

  return 0;
}