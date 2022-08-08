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
    cin >> n;
    int sum = 1;

    for (int i = 0; i < n; i++){
        sum *= 2;
    }
    cout << sum << endl;

     return 0;
}
