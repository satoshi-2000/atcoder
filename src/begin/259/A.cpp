#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
using namespace std;
using std::vector; using std::any_of;
using std::vector; using std::find;
using std::max;
//using std::erase;
//using std::vector::erase;

// 時間超過
int main() {
    int n,m,x,t,d;
    cin >> n >> m >> x >> t >> d;
    int h = 0;  //  output

    //  身長の変化なし
    if (x <= m){
        h = t;
    } else {
        h = t - d * (x - m);
    }

    cout << h << endl;     return 0;
}
