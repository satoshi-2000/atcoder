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
4以上になった時点で加算
*/


// 時間超過
int main() {
    int n;
    cin >> n;
    int a[n];
    int p = 0;
    bool existPiece[4] = {false,false,false,false};

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        existPiece[0] = true;   //  マス0にコマを置く
        for (int j = 3; j >= 0 ; j--){            
            if(existPiece[j]){
                existPiece[j] = false;  //  コマの移動
                if(j + a[i] >= 4){
                    p++;
                } else {
                    existPiece[j + a[i]] = true;
                }
            }
        }
    }

    cout << p << endl;

     return 0;
}
