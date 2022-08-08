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

n*2 組存在
(i,j)でやればいいので，基本的には半分の時間で終わるはず

*/

int main(){
    int n;
    cin >> n;
    //sting A[n][n];
    string A[n];
    bool isCorrect = true;  //  判定

    for (int i = 0; i < n; i++){
        //for (int j = 0; j < n; j++){
            //cin >> A[i][j];
            cin >> A[i];
        //}
    }

    for (int i = 0; i < n && isCorrect; i++){   //  2/n + 1でもできそう
        for (int j = 0; j < n && isCorrect; j++){
            if(i == j){
                if(A[i][j] == '-'){
                    //  何もしない
                }
            } else if(A[i][j] == 'W'){
                if(A[j][i] != 'L'){
                    isCorrect = false;
                }
            } else if(A[i][j] == 'L'){
                if(A[j][i] != 'W'){
                    isCorrect = false;
                }
            } else if(A[i][j] == 'D'){
                if(A[j][i] != 'D'){
                    isCorrect = false;
                }
            }
        }
    }

    //cout << A[0][1];

    if(isCorrect){
        cout << "correct" << endl;
    } else{
        cout << "incorrect" << endl;
    }
    
        return 0;
}
