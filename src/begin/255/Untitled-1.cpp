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


*/


// 時間超過
int main() {
    int x,a,d,n;
    cin >> x >> a >> d >> n;
    long long int s[n];
    long long int x_diff;// = 100000000;

    //s[0] = a;   //  初項

    s[0] = a;
    s[1] = a + d;

    for (int i = 2; i < n; i++){
        s[i] = s[i-1] + d;
    }

    //for (int i = 0; i < n; i++){
    //    s[i] = a + i *d;         
    //}

    x_diff = abs(s[0] - x);
    for (int i = 1; i < n; i++){
        if (x_diff > abs(s[i] - x)){
            x_diff = abs(s[i] - x);
            //cout << x_diff << 's' << endl;
        }
    }

    cout << x_diff << endl;

     return 0;
}
