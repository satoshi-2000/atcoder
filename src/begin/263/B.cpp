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
    int n;
    cin >> n;
    int p[n];
    for (int i = 0; i < n-1; i++){
        cin >> p[i];
    }

    cout << p[n-2] << endl;
    return 0;
}
