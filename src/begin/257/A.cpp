#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
using namespace std;
using std::vector; using std::any_of;
using std::vector; using std::find;
using std::max;
//using std::erase;
//using std::vector::erase;

/*

2 12 : F

↑ 6番目の数字を出せばよい
12 / 2

X / N

12文字目 = 

12 / 2 = 6

6種類目

13番目の数は?

13 / 2 = 6.5
だけれど、これもF

*/


// 時間超過
int main() {
    //string s[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    //string s[26] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    int n,x;
    cin >> n >> x;
    string s = "A";
    //string s2 = "";
    //for (int i = 0; i < 26; i++){
    //    for (int j = 0; j < n; j++){
    //        s2 = s2 + s[j];
     //   }   
    //}//
    //cout >> s2.size() >> endl;

    //cout >> s2[x] >> endl;
    //cout >> (s2+x) >> endl;
    //printf("%c\n", (s))

    //int div = x / n + x % n - 1; // 割り切れない場合があり得る x 13とか -> x / n + x % n か？
    //int div = x / n  - 1; // 割り切れない場合があり得る x 13とか -> x / n + x % n か？
    int div;

    if (x < n){
        div = x / n;
    }else{
        div = x / n  - 1;
    }

    if (div < 0){
        div = 0;
    }

    div = (x - 1) / n;

    //  x < n のとき 1,2 の時、1/2= 0, -1 より A-1になってしまう
    //x > n
    //if(x / n == 0){
        
    //}

    //cout >> (s[0] + div) >>  endl;
    printf("%c\n", (s[0]+div));

     return 0;
}
