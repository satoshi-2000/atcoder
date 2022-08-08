#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
//#include <cmath>
#include <math.h>
#include <map>
using namespace std;
using std::vector; using std::any_of;
using std::vector; using std::find;
using std::max;
using std::reverse;
//using std::erase;
//using std::vector::erase;


/*

bit反転を使って何かできないか？
ABの二値なので

A = 1
B = 0
とすると

001010


XX -> 10

にすることは可能

2*10^5 がおもろいな


ABAB
1010
↑無理
なぜ？
1001にはならないので(XX -> 10への変換しか持たない

101011010101

1010 1101 0101
      (XXXX)

XXXX以外は回文(部分回文)


つまり、周りを見てもよいが、 N < 4以上の場合に 4の時に回文になりえない形が存在する

N=3の時は？

AAA

-> ABA
ok

BBB 
-> BAB 
ok

N > 2

AA or BB
ok
AB or BA
ng
(最初の判定で除去れる)

N <3

N = 3

BBB ok
BBA ok
BAB ok
BAA ok
ABB ok
ABA ok
AAB ng
AAA ok

AABの形は無理なのか。 (つまり、反対方向に既にABがあって、変換してもダメ)


真ん中の4個だけを見ればok


BBBB ok
BBBA ok
BBAB ng
BBAA ng
BABB ok
BABA ok
BAAB ok
BAAA ok

ABBB ng
ABBA ok
ABAB ng
ABAA ng
AABB ng
AABA ok
AAAB ng
AAAA ok


よって
XYZWとおけば、

K = X^Z^+Z^W+X^Y+YW






BAXX
XXBA
元から回文


NG
ABXX (BA以外)
XXAB (BA以外)



つまり、別のパターンを含む場合のみなりうる(カルノー図みたい)




↑考えてみる

)




*/

/*

回文の判定 : string s を判定させて reverse s == s を判定すれば良い。



ABに変更することで出来るかを判定するには？


XX YY XX BA XX

について、YYをABに置換することにする。

この時、ABが対応関係にあるのであれば、変更したらいい。

・条件
    //  ある時点のparcial s (ps) が、それに対応する reverse ps(rps) と一致しているならスルー
    //  判定は文の半分まで行えば良い(これで全て見たことになる) -> ならない


Q. ABBA のように、1回の変換で内部の組が回文であることが確認出来るような場合ではない時には？
(奇数と偶数に分ける必要はあるのか？)

ABBA によって

ABXXXXXXAB?

対になるものがBAになる時に限り、
(半分を過ぎたら見るものを反転させる)




*/

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string rev_s = s;
    reverse(rev_s.begin(),rev_s.end());

    bool isPal = true; //  回文
    string tmp_s;
    string tmp_rev_s;

    //  既に回文
    if (s == rev_s){    //  これでn = 2の時を弾ける
        cout << "Yes"  << endl;
    }else if(n == 3){
        if(s != "AAB"){
            cout << "Yes" << endl;
        } else{
            cout << "No" << endl;
        }
    }else{  //  n > 4   奇数の場合を考慮できていない気がする
        for(int i = 0; i < n - 1 && isPal; i++){
            tmp_s = s[i] + s[i+1];
            tmp_rev_s = rev_s[i] + rev_s[i+1];
            if((tmp_s[0] == 'B' && tmp_rev_s[0] == 'B') || (tmp_s[0] == 'A' && tmp_rev_s[0] == 'A') ||
                (tmp_s[0] == 'B' && tmp_s[1] == 'A') || (tmp_rev_s[0] == 'B' && tmp_rev_s[1] == 'A')){
                    //  何もしない
            } else{
                isPal = false;
            }            
        }
        if(isPal){
           cout << "Yes" << endl;
        } else{
            cout << "No" << endl;
        }

    }
    /*
        for(int i = 0; i < n/2; i++){
            if((s[i] != s[n - i - 1])){
                if(s[n - i - 1] == 'A' && s[n - i -2] == 'B'){
                    s[i] = 'A';
                    s[i + 1] = 'B';
                }
            }
        }
        rev_s = s;
        reverse(rev_s.begin(),rev_s.end());
        
        if(s == rev_s){
            cout << "Yes"  << endl;
        } else{
            for(int i = n - 1; i >  n/2; i--){
                if((s[i] != s[n- i - 1])){
                    if(s[n - i - 1] == 'B' && s[n - i -2] == 'A'){
                        s[i] = 'A';
                        s[i + 1] = 'B';
                }
            }
        }
            rev_s = s;
            reverse(rev_s.begin(),rev_s.end());

            if (s == rev_s){
                cout << "Yes"  << endl;
            }else{
                cout << "No"  << endl;
            }
        }
    }
    */
    //cout << s << endl;
    //cout << rev_s << endl;

    
            return 0;
}
