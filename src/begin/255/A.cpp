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
置換は大小関係が存在するかどうかで行う
入れ替えた後、再びやっても良い --> iの値を何度も0に更新して、最初からやり直せばよい。

*/


// 時間超過
int main() {
    int r,c;
    int a[2][2];
    cin >> r >> c;
    cin >> a[0][0] >> a[0][1];
    cin >> a[1][0] >> a[1][1];

    cout << a[r-1][c-1] << endl;
     return 0;
}
