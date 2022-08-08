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
文字列の中で、最も少なく含まれている文字を
削除したうち、min_value - 削除数分増やしとくか？

*/


// 時間超過
int main() {
    int n;
    int y;

    cin >> n;

    //cout << n % 100 << endl;
    y = n % 100;

    if (y < 10){
        cout << '0' << y << endl;
    } else {
        cout << y << endl;
    }


     return 0;
}
