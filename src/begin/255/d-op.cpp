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


等差数列SをA,D,Nから求める。

XとのSに含まれる要素との差が最も小さい数が最小回数そのもの


各値とXとの差を合計すれば良い

*/

//int s[100];
//long long int s[1000000000000];



// 時間超過
int main() {
    int n,q;
    cin >> n >> q;
    long int a[n];
    long int x[q];
    long int op_sum[q] = {0};
    //for (int i )

    for (int i = 0; i < n; i++){        
        cin >> a[i];
    }
    for (int i = 0; i < q; i++){
        op_sum[i] = 0;
        cin >> x[i];
    }

    for (int i = 0; i < q; i++){
        for (int j = 0; j < n; j++){
            //op_sum[i] += abs(x[j] - a[i]);
            op_sum[i] += abs(a[j] - x[i]);
        }
    }

    for (int i = 0; i < q; i++){
        cout << op_sum[i] << endl;
    }
     return 0;
}
