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
    int n,a,b;
    cin >> n >> a >> b;
    int sum = 0;

    for (int i = 1; i < n + 1; i++){
        if((i%a != 0) && (i%b != 0)){
            sum += i;
        }
    }
    cout << sum << endl;

     return 0;
}
