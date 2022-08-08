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


考え方が違った。
N回投げたうちの最大値を求めて、(指数関数的に増大する)その中での最大値を求めるらしい

2^N通りやることにならない？愚直にやるとダメそうだけれど


*/

int main(){
    int n,m;
    cin >> n >> m;
    long long int X[n];
    int C[m], Y[m];
    long long int max = 0;
    long long int sum = 0;
    int coin = 0;
    long int div = 1000000000;
    int count = 0;

    for(int i = 0; i < n; i++){
        cin >> X[i];
    }
    for (int i = 0; i < m; i++){
        cin >> C[i] >> Y[i];        
    }

    for(int i = 0; i < n; i++){
        //for (int j = 0; j < m; j++){
            div = 1000000000;
            sum = 0;
            count = 0;
            for(int k = 0; k < 10 && X[i] > 0; k++){                
                //  数値更新
                coin = X[i] / div;   //  0 or 1
                X[i] %= div;
                div /= 10;

                if(coin == 1){
                    sum += 
                    count++;
                } else {
                    count = 0;
                }


            }

        //}
    }







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
