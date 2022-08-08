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
    int A[n][n];
    int m = 1;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j == 0 || j == i){
                A[i][j] = 1;
            } else {
                A[i][j] = A[i-1][j-1] + A[i-1][j];
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << A[i][j] << ' ';
        }
        cout << endl;
        m++;    //  更新毎に出力文字を増加
    }

     return 0;
}
