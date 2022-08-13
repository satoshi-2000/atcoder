#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
//#include <cmath>
#include <math.h>
using namespace std;
using std::vector; using std::any_of;
using std::vector; using std::find;
using std::max;
//using std::erase;
//using std::vector::erase;


/*
SとTについて、先頭から見ていって、
・一致するなら何もしない
・一致しないなら、sの走査上にある文字を増やして、またしても一致する

*/

// 時間超過
int main() {
    string str = "atcoder";
    int l,r;
    cin >> l >> r;

    for (int i = l-1; i < r ; i++){
        cout << str[i];
    }    return 0;
}
