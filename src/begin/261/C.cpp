#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
//#include <cmath>
#include <math.h>
#include <map>
using namespace std;
using std::vector; using std::any_of;
using std::vector; using std::find;
using std::max;
//using std::erase;
//using std::vector::erase;

/*


https://qiita.com/Kamoshika/items/e7225b54f2058e700154 (2022/07/23 参考)

mapか？
stringをmapで登録して、表示するたびに消していく
mapに要素を消した分の回数をカウントさせておく(その回数を表示で参照する)

*/

int main(){
    int n;
    cin >> n;
    //sting A[n][n];
    string S[n];
    map<string, int> dict;  //  map
    string x;

    bool isCorrect = true;  //  判定

    for (int i = 0; i < n; i++){
        cin >> S[i];
    }

    for(int i = 0; i < n; i++){
        x = S[i];        
        cout << S[i];
        dict[x]++;
        if(dict[x] > 1){
            cout << '(' << dict[x] - 1 << ')' << endl;
        } else {
            cout << endl;
        }        
    }    
        return 0;
}
