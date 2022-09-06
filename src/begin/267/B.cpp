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

{7},{4},{2,8},{(1),5},{3,9},{6},{10}

ピンが全て倒れている列(端は無視)が存在するとき、その左側と右側で1pinでも存在するものがあるならばok


グループ毎に1本でも立っているか否かを判定する (false : 全て倒れている)

*/

// 時間超過
int main() {
    string s;
    cin >> s;
    bool isStand[10];
    bool isGroup[7];    //  groupで判定
    bool isFinish = false;

    for(int i = 0; i < 10; i++){
        if(s[i] == '0'){
            isStand[i] = false; //  倒れているとfalse
        } else{
            isStand[i] = true;  //  立っている
        }
    }

    isGroup[0] = isStand[6];
    isGroup[1] = isStand[3];
    isGroup[2] = isStand[1] || isStand[7];
    isGroup[3] = isStand[4];    //  1は倒れている前提なので判定しない
    isGroup[4] = isStand[2] || isStand[8];
    isGroup[5] = isStand[5];
    isGroup[6] = isStand[9];

    //for(int i = 0; i < 7; i++){
    //    cout << isGroup[i] << endl;
    //}

    //for(int i = 0; i < 10; i++){
    //    cout << isStand[i] << endl;
    //}



    if(isStand[0]){ //  ピン1が立っている
        cout << "No" << endl;

    } else{
        for(int i = 1; i < 6 && !isFinish; i++){
            if(!isGroup[i]){
                bool tmp_j = false;
                bool tmp_k = false;
                for(int j = 0;j < i;j++){                    
                    tmp_j |= isGroup[j];
                }
                for(int k = 6;k > i; k--){                    
                    tmp_k |= isGroup[k];
                }

                if(tmp_j && tmp_k){                    
                    isFinish = true;
                }
            }
        }

        if(isFinish){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}
