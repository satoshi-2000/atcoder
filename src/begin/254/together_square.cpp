#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
using namespace std;
using std::vector; using std::any_of;
using std::vector; using std::find;
using std::max;
//using std::numeric_limits::is_integer;
//using std::erase;
//using std::vector::erase;

/*

X^2のリストを作る

X^2 < N 
まで以下の処理を行う


分解出来うるのは
1とNkのみ

1
(1,1) =1

2(4)
(1,4),(4,4)(2,2),(3,3)

1とNk
or

8 * 2 = 16
じゃん

素因数分解したときに、X


1



平方数を満たす組を求めるには、Nを素因数分解して、


置換は大小関係が存在するかどうかで行う
入れ替えた後、再びやっても良い --> iの値を何度も0に更新して、最初からやり直せばよい。

*/


bool is_integer(double x){
    return (sqrt(x) * sqrt(x) == int(x));
}


bool vector_finder(std::vector<int> vec, int number) {
  auto itr = std::find(vec.begin(), vec.end(), number);
  size_t index = std::distance( vec.begin(), itr );
  if (index != vec.size()) { // 発見できたとき
    return true;
  }
  else { // 発見できなかったとき
    return false;
  }
}
// https://qiita.com/wonder_zone/items/51fb5c3a773b98aa130c



// 時間超過
int main() {
    int n;
    cin >> n;
    int sum = 0;
    vector<int> v;
    int tmp;
    int a[n];
    int m = 0;
    bool isBigger = true;

    for (int i = 1; i < n + 1; i++){
        tmp = i;
        v.push_back(i);
    }

    /*
    for (int i = 1 ; i < n + 1; i++){
        //tmp = i * i;
        a[i - 1] = i * i;
    }
    */

   // sqrt(x) * sqrt(x) == x ==> xは整数では？




   for(int i = 1; i < n + 1; i++){
       for (int j = 1; j < n + 1; j++){
           if(i == j || (i == 1 && is_integer((double)j) || 
           //(j == 1 && is_integer((double)i)) || (std::floor(sqrt(j)) == sqrt(j)) )){
               (j == 1 && is_integer((double)i)) || vector_finder(v,sqrt(i*j)) )){
               sum++;
           }
       }
   }
   cout << sum << endl;

    // 9までだったら？
    /*
    (5,5),(6,6),(7,7),(8,8),(9,9),(1,9),(9,1)
    5 + 2

    9 + 4

    リストの中で、一致するまで和を求めればよい
    */

    // (i*2 : 4)
    // 1,k : 2

    // 1まで + 2 以降の n -1 (n*2が存在するので) + 2 * (n - 1) (1の組み合わせ)
    // s = 1 + n - 1 + 2n - 2
    //  = 3n - 2
    //(4の時, 1 + n = 3 ) n*2を含む時の対が1,4と4,1で、1,4,9,81,256,...のように限られる
    // 

    // sum = N個(ただの平方数) + (1を含むN乗組み合わせ(つまり2倍))のm個

/*
    for (int i = 0; i < n && isBigger; i++){
        if (n < a[i]){
            m = i + 1;
            cout << a[i] << " a[i]" << endl;
            isBigger = false;
        }
    }

    sum = n + 2 * m;

    cout << sum << endl;
    */

    /*    
    for (int i = 1; i < n + 1; i++){
        for(int j = 1; j < n + 1; j++){
            //if (i == j || (i == 1 && std::floor(sqrt(j) == sqrt(j)) || 
            if (i == j || (i == 1 && std::floor(sqrt(j) == sqrt(j)) || 
                (std::floor(sqrt(i) == sqrt(i)) && j == 1))){
                    cout << i << " " << j << endl;

           //if(is_integer(sqrt(i * j))){
            //if(std::floor(sqrt(i * j)) == (i * j)){
               sum++;
           }
        }
    }
    cout << sum << endl;
    */
     return 0;
}
