#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
using namespace std;
using std::vector; using std::any_of;


void printVec(vector<int> &v){
   // for debug print
   for (auto &item : v){
       cout << item << " ";
  }
  cout << endl;
}

int main() {
  int a,n;
  bool isInc = false; // 既に含まれているか否かを判定
  int kagami_count = 0;
  
  cin >> n ;
  
  vector<int> v(n); 
  vector<int> kagami(n);

  v.reserve(n);
  for (int i {0}; i < n; i++){
      cin >> a;
      v.push_back(a);
  }
  // https://qiita.com/ysk24ok/items/30ae72f4f1060b088588 (2022/05/08参照)
  std::sort(v.begin(),v.end(),std::greater<int>() );
  //printVec(v);


  //std::unique(v.begin(),v.end());   // unique()で隣り合う重複要素を削除
  // https://d1lvwzdke54ywg.cloudfront.net/del-duplication-vector/ (2022/05/08参照)  
  v.erase(std::unique(v.begin(),v.end()),v.end());

  //printVec(v);
  
  // https://cpprefjp.github.io/reference/algorithm/count_if.html(2022/05/08参照)

  kagami_count = std::count_if(v.begin(),v.end(), [](int i) { return i != 0;});
  
  cout << kagami_count << endl;


  /*
  // for debug print
  for (auto &item : v){
      cout << item << " ";
  }

  // 初期値0を持つ要素を削除
  std::remove(v.begin(),v.end(),0);
  for (auto &item : v){
      cout << item << " ";
  }
  cout << v.size() << endl;

  */

  // 10 8 6 0 0 0 0 0 8
  // 0を削除出来なかったので、0ではない数を数え上げる方針に切り替える。
  
  /*
  for (int i = 0; i < n; i++){
      isInc = false;

      cout << "kagami.size\t" << kagami.size() << endl;

      for (int j = 0; j < kagami.size(); j++){
          if(v[i] == kagami[j]){
              cout << v[i] << endl;
              isInc = true;
          }
      }
      if(!isInc){   // 含まれていない場合は追加
        kagami.push_back(v[i]);
        kagami_count++;
      }
  }

  cout << kagami.size() << endl;
  // 重複しない要素数=重ねられる段数
  cout << kagami_count << endl;
  */
  return 0;
}