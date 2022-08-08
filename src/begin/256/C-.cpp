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

3 <= x <= 30

h1 = a11 + a12 + a13

w1 = a11 + a21 + a33

h1 + w1 = 2a11 + a12 + a13 + a21 + a33

2a11 = h1 + w1 - a12 - a13 - a21 - a33 = X

a11 = 1/2 X

30 ^3

900 
27000
↑小さい
計算量もたかがしれている


h1,h2,h3を満たす組み合わせを求める

a11を足し合わせてw1, w2, w3を満たすかを判断


*/


// 時間超過
int main() {
    int h[3], w[3];

    for (int i = 0; i < 3; i++){
        cin >> h[i];
    }

    for (int i = 0; i < 3; i++){
        cin >> w[i];
    }

    // 合計30になるようにする選び方は 1 <= x <= 28 の中から 30C3以下?
    // 30 * 29 * 28 / (3 * 2 * 1) = 4060
    int cH1[5000][3];
    int cH2[5000][3];
    int cH3[5000][3];
    int cW1[5000][3];
    int cW2[5000][3];
    int cW3[5000][3];
    int num_cH1 = 0;
    int num_cH2 = 0;
    int num_cH3 = 0;
    int num_cW1 = 0;
    int num_cW2 = 0;
    int num_cW3 = 0;
    int sum = 0;

    //  冗長    
    // 条件を満たす組み合わせを求める
    int k;
    for (int i = 1; i < h[0] - 1; i++){ // h1 - 2 があるセルで取り得る値の最大値
        for (int j = 1; j <= h[0] - 1 - i; j++){ // 2つの値を決めれば、3つ目の値は差で求まる
            k = h[0] - i - j;
            cH1[num_cH1][0] = i;
            cH1[num_cH1][1] = j;
            cH1[num_cH1][2] = k;
            num_cH1++;
        }
    }

    for (int i = 1; i < h[1] - 1; i++){ // h1 - 2 があるセルで取り得る値の最大値
        for (int j = 1; j <= h[1] - 1 - i; j++){ // 2つの値を決めれば、3つ目の値は差で求まる
            k = h[1] - i - j;
            cH2[num_cH2][0] = i;
            cH2[num_cH2][1] = j;
            cH2[num_cH2][2] = k;
            num_cH2++;
        }
    }

    for (int i = 1; i < h[2] - 1; i++){ // h1 - 2 があるセルで取り得る値の最大値
        for (int j = 1; j <= h[2] - 1 - i; j++){ // 2つの値を決めれば、3つ目の値は差で求まる
            k = h[2] - i - j;
            cH3[num_cH3][0] = i;
            cH3[num_cH3][1] = j;
            cH3[num_cH3][2] = k;
            num_cH3++;
        }
    }

    //for (int i = 0; i < num_cH3; i++){
    //    cout << cH3[i][0] << " " << cH3[i][1] << " " << cH3[i][2] << endl;
    //}



    //cout << h[0] << " " << cH1[0][0] << " " << cH1[0][1] << " " << cH1[0][2] << endl;
    //  cout << h[1] << " " << cH1[1][0] << " " << cH1[1][1] << " " << cH1[1][2] << endl;   //  4 000
    //  cout << "num_cH1\t" << num_cH1 << endl; //  1

    //cout << h[1] << " " << cH2[0][0] << " " << cH2[0][1] << " " << cH2[0][2] << endl;   //  4 1 1 2
    //cout << h[1] << " " << cH2[1][0] << " " << cH2[1][1] << " " << cH2[1][2] << endl;   //  4 1 2 1
    //cout << "num_cH2\t" << num_cH2 << endl; //  3

    //cout << "num_cH3\t" << num_cH3 << endl; //  10

    for (int i = 0; i < num_cH1; i++){
        for (int j = 0; j < num_cH2; j++){
            for (int k = 0; k < num_cH3; k++){
                if(cH1[i][0] + cH2[j][0] + cH3[k][0] == w[0]){
                    //cout << w[0] << "w1 clear" << endl;
                    //cout << "i : " << i << "j : " << j << "k : " << k << endl;
                    if(cH1[i][1] + cH2[j][1] + cH3[k][1] == w[1]){
                        //cout << w[0] << "w2 clear" << endl;
                        //cout << "i : " << i << "j : " << j << "k : " << k << endl;
                        //cout << "i : " << cH1[i][0] << "j : " << cH2[j][0] << "k : " << cH3[k][0] << endl;
                        //cout << "i : " << cH1[i][1] << "j : " << cH2[j][1] << "k : " << cH3[k][1] << endl;
                        //cout << "i : " << cH1[i][2] << "j : " << cH2[j][2] << "k : " << cH3[k][2] << endl;
                        //cout << "w2 : " << w[2] << endl;
                        if(cH1[i][2] + cH2[j][2] + cH3[k][2] == w[2]){
                            sum++;
                        }
                    }
                }
            }
        }
    }

    cout << sum << endl;

     return 0;
}
