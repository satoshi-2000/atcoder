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

Bの全行に対して、Aの各行の中で←ダメ　上下関係がある


削除を行えるのは、行のみ or 列のみ

したがって、行か列が完全に一致している部分がAとBにあるのかを比較すれば良い。(全探索？)

ここで、どちらかに一致が確認できるためには、行数あるいは列数のうちどちらかが一致している必要がある。
(両方一致していない時点で破綻)

//  要素をstringのように扱えると楽そう

//  転置するか？

// これ、Aは操作できるけれど、Bは固定のままらしい


任意の組み合わせで、行と列を削除しながら、求められるかって問題だった



*/

// 時間超過
int main() {
    int h1,w1,h2,w2;
    bool isMatch = false;  
    bool checkColumn = false;   //  行
    bool checkRow = false;  //  列

    cin >> h1 >> w1;
    int A[h1][w1];
    

    for (int i = 0; i < h1; i++){
        for (int j = 0; j < w1; j++){
            cin >> A[i][j];
        }
    }

    cin >> h2 >> w2;
    int B[h2][w2];
    
    for (int i = 0; i < h2; i++){
        for (int j = 0; j < w2; j++){
            cin >> B[i][j];
        }
    }

    //  行数と列数のチェック
    if(h1 == h2){   //  行
        checkColumn = true;
    }

    if(w1 == w2){   //  列
        checkRow = true;
    }

    if(checkColumn || checkRow){
        
        if(checkColumn){
            for(int i = 0; i < h1 && !isMatch; i++){
                for(int j = 0; j < h1; j++){
                    if(A[i] == B[j]){
                        isMatch = true;
                    }
                }
            }

        }


        if(!isMatch && checkRow){   //  既にmatchしていたらスキップ

        }
        



    } else{
        cout << "Yes" << endl;
    }





    //  行の一致チェック

    //  Aの各行を取り出し、一致するかを確認する
    for (int i = 0; i < )

    





    string str = "atcoder";
    int l,r;
    cin >> l >> r;

    for (int i = l-1; i < r ; i++){
        cout << str[i];
    }    return 0;
}
