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

最初の区間をセット a0(]

次の区間を読み込む

最小値が初期区間a0の(よりも大きく、]よりも小さければ変更しうる
    →がa0 < a1
    ならa1を更新

(よりも大きく、]よりも

N : 2 * 10^5
で、最も区間が広がるのは、1ずつ増えるようなもので、どの区間とも結合しない場合
(上限）

*/


// 時間超過
int main() {
    int n;
    cin >> n;
    int l[n],r[n];
    int suml[n],sumr[n];    //  和集合
    int num_union = 1;   //  最終的に出力する集合の数
    bool isUnion = false;

    for (int i = 0; i < n; i++){
        cin >> l[i] >> r[i];
    }
    
    //  初期値の設定
    suml[0] = l[0];
    sumr[0] = r[0];

    for (int i = 1; i < n; i++){
        //  結合リセット
        isUnion = true;
        for (int j = 0; j < num_union && isUnion; j++){ //  1度だけ結合
            if(suml[j] >= l[i]){ //  下限を広げる
                if (sumr[j] >= r[i]){   //  下限のみを広げる
                    suml[j] = l[i];
                    isUnion = false;
                } else if (sumr[j] < r[i]){ //  上限と下限を広げる
                    suml[j] = l[i];
                    sumr[j] = r[i];
                    isUnion = false;
                }
            } else {    //  上限を広げる
                if(sumr[j] >= l[i] && sumr[j] < r[i]){  //  上限のみを広げる
                    sumr[j] = r[i];
                    isUnion = false;
                }
            }
        }

        //cout << " ----- for debug ------" << endl;
        //  for debug
        //cout << suml[0] << " " << sumr[0] << endl;

        //cout << " ----- for debug ------" << endl;

        //  作成した区間に収まる場合
        for (int j = 0; j < num_union; j++){
            if(suml[j] <= l[i] && sumr[j] >= l[j]){
                isUnion = false;
            }
        }

        //  どの区間にも結合されなかった場合
        if(isUnion){    //  新しい区間を追加
            suml[num_union] = l[i];
            sumr[num_union] = r[i];
            num_union++;
            isUnion = false;
        }             
            
    }

    for (int i = 0; i < num_union; i++){
        cout << suml[i] << " " << sumr[i] << endl;
    }

     return 0;
}
