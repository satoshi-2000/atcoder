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
文字列の中で、最も少なく含まれている文字を
削除したうち、min_value - 削除数分増やしとくか？

*/


// 時間超過
int main() {
    int q;
    cin >> q ;
    int query[q];
    int qx[q];
    int qc[q];
    //vector<int> v[200000];
    vector<int> v;
    int min_val = 0;
    int elem_num = 0;
    int add_num = 0;
    int min_count;

    for (int i = 0; i < q; i++){
        cin >> query[i];
        if (query[i] == 1){
            cin >> qx[i];
        } else if (query[i] == 2){
            cin >> qx[i];
            cin >> qc[i];
        }        
    }

    for (int i = 0; i < q; i++){
        switch (query[i])
        {
        case 1:
            v.push_back(qx[i]);
            /* code */
            break;
        
        case 2:
            min_count = count(v.begin(),v.end(),qx[i]);
            cout << "min_count\t" << min_count << endl;
            //min_val = min(qc[i],count(v.begin(),v.end(),qx[i]));
            min_val = min(qc[i],min_count);
            add_num = min_val - count(v.begin(),v.end(),qx[i]); // 過剰に消した数だけ増やす
            v.erase(remove(v.begin(), v.end(), qx[i]), v.end());

            for (int i = 0; i < add_num; i++){
                v.push_back(qx[i]);
            }
            break;
        
        case 3:
            cout << (*max_element(v.begin(),v.end()) - *min_element(v.begin(),v.end())) << endl;
            break;           
        
        default:
            break;
        }
    }
     return 0;
}
