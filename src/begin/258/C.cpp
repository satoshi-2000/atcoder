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
1.(2,4) -> c
dsuccxulnl -> dsuccxulnl

2. (2,7) -> u
dsuccxulnl -> dsuccx(u)lnl


3. (1,2)
dsuccxulnl -> (ll)dsuccxuln

4. (2,7) -> c
lldsuccxuln -> lldsuc(c)xuln

5. (1,1)
lldsuccxuln -> (n)lldsuccxul

6.(1,2)
nlldsuccxul -> (ll)nlldsuccxu

7.(1,3)
llnlldsuccxu -> (uuu)llnlldsuccx

*/
// 時間超過
int main() {
    int n,q;
    string s;
    string s_tmp;    
    cin >> n >> q;
    int query[q][2];
    cin >> s;
    for (int i = 0; i < q; i++){
        cin >> query[i][0] >> query[i][1];
    }

    // query
    for (int i = 0; i < q; i++){
        if(query[i][0] == 1){
            s_tmp = s[s.size()-1];  //  末尾の文字列を取得
            s.erase(s.size() - 1);  //  末尾の文字列を削除
            for (int j = 0;j < query[i][1]; j++){   //  x回文字列挿入
                s.insert(0,s_tmp);
            }
        } else{ //  x番目を出力
            cout << s[query[i][1]-1] << endl;
        }
        //  for debug
        cout << "for debug\t" <<  s << endl;
    }

     return 0;
}
