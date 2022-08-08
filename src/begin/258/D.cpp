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

C = A + B
を作成
Cの最小値を取得

Bの最小値を取得 * n-1倍して足す

A1,B1をvectorで受け取って
Aの最小値とそのindexを取得

B3は選ばずにやった方が良いってことか

*/
// 時間超過
int main() {
    int n,x;
    cin >> n >> x;
    int A[n],B[n];
    int ab_min = 1000000000;
    int b_min = 1000000000;
    int ab_sum = 0;
    for (int i = 0; i < n; i++){
        cin >> A[i] >> B[i];
        if(B[i] < b_min){
            b_min = B[i];
        }
        if (A[i] + B[i] < ab_min){
            //ab_min = A[i] + B[i];
            ab_sum += A[i] + B[i];
        }
    }

    cout << ab_min + b_min * (n-1) << endl;
         return 0;
}
