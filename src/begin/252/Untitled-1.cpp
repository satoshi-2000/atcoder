#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
using namespace std;
using std::vector; using std::any_of;
using std::vector; using std::find;
using std::max;


/*
文字列の中で、最も少なく含まれている文字を


*/


// 時間超過
int main() {
    int n,k;
    cin >> n >> k;    
    int a[n],b[k];
    int max_val = 0;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < k; i++){
        cin >> b[i];
    }

    max_val = std::max(a);  //  最大値
    cout << max_val << endl;
    return 0;
}
