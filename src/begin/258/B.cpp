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
(9からスタートの方が良い？data次第)
最大値を検索して、
再び最初のループから、最大値候補の取り得る最大値を計算する

*/

class MaxValue{
    public:
        MaxValue()
    {
        int max;
        int x;
        int y;
    }
    private:

}

// 最大値の検索関数 (戻り値は取り得る最大値)
int search_max(int n, int A[][], int x, int y){
    int max;
    int s_x,s_y;
    for (int i = -1; i < 2; i++){
        for (int j = -1; j < 2; j++){
            if(i == 0 && j == 0){   //  何もしない

            } else{
                s_x = x + i;
                s_y = y + j;
                if(s_x < 0 ){   //  左端
                    s_x = n - 1;   //   右端へ移動
                } else if(s_x > n - 1){ //  右端
                    s_x = 0;   //   左端へ移動                
                }
                if(s_y < 0 ){   //  下端
                    s_y = n - 1;   //   上端へ移動
                } else if(s_y > n - 1){ //  上端
                    s_y = 0;   //   下端へ移動                
                }
                if(max < A[s_x][s_y]){
                    max = A[s_x][s_y];
                }
            }
        }
    }

    //if (n > 0){
    //    return search_max(n,s_x,s_y);
    //}else {
    //    return pre_max * 10 + max;
    //}
    return max,;
}


// 時間超過
int main() {
    int n;
    cin >> n;
    int A[n][n];
    int a_tmp;
    int c_max = 0;  //  current max value
    //int c_max_index[n][n];  //  最大値として取り得る候補
    string s = "";  //  出力用

    for (int i = 0; i < n; i++){
        cin >> a_tmp;
        for (int j = n - 1; j >= 0; j--){
            A[i][j] = a_tmp % 10;
            a_tmp = a_tmp / 10;
            if (c_max < A[i][j]){   //  最大値を検索
                c_max = A[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(A[i][j] == c_max){
                

            }

        }

    }

    /*
    // for debug
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    */

     return 0;
}
