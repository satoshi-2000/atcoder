#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
using namespace std;
using std::vector; using std::any_of;

  // 
  /*
  1. 文頭が'e'なら"erase",'d'なら"dream"を追加,'r'なら'r'を追加, それ以外であれば"NO"を出力
  2. 1を入力文字列の末尾のインデックスまで行う。
  3. 2までに生成した文字列と入力文字列を比較し、一致していれば"YES",そうでなければ"NO"を出力
  
  */
// https://qiita.com/MasahiroBW/items/3f56b22a079cd3272cd3 (2022/05/08参照)
// https://docs.microsoft.com/ja-jp/dotnet/api/system.string?view=net-6.0 (2022/05/08参照)

int main() {
  string s,t="";
  string d = "dream";
  string e = "erase";
  int index = 0;  

   cin >> s;

   /*
   下記方法でAC11,WA8
   */
  /*

   // 入力文字列の終わりまで
   while(index <= (int)s.size()){
       if(s[index] == 'd'){
           t += d;
           index += 5;
       } else if(s[index] == 'e'){
           t += e;
           index += 5;
       } else if(s[index] == 'r'){
           t += "r";
           index += 1;
       } else {
           index = 100001; // 1 <= |s| <= 10^5であるため、範囲外の値を付与
       }
   }
   */

  // 諦めて下記を参照
  // https://atcoder.jp/contests/abs/submissions/31466639 (2022/05/08参照)

  // 今回の問題点は、単語を6文字目まで見なければどの文字列にマッチするかが分からない点にある。
  // よって、文を反転させれば'r'が最初に出現する特性を利用して、パターンパッチングを行えば良いようだ。
  regex re("(maerd|remaerd|esare|resare)*");  // 全て指定の文字列かを判別する正規表現

  reverse(begin(s),end(s));
  // https://cpprefjp.github.io/reference/regex.html(2022/05/08参照)
  // regex_match()で文字列全体が正規表現にマッチするか否かの判定を行う (function template)

  bool isMatch = regex_match(s,re);


   //cout << t << endl;

   //if (s == t){
   if(isMatch){
       cout << "YES" << endl;
   } else {
       cout << "NO" << endl;
   }
  return 0;
}