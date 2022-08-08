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

nが全体の長さ, Mが上限
愚直にやると10^10になる

n=m=1の時に破綻しそう

配列でやるか

(10桁含みうるので)
A[10]

初期値として、1をA[0]に代入する。
N桁分(A[0]からA[N-1]まで)

1+1+... していく (関数で宣言した方が良さそう)
A[N-1]の数値がMになるまで、1に増やしながら表示する (終わったら)

A[N-2]の数値を+1して, A[N-1]の値をまた+1する。A[N-1]の値がMになるまで増やしてカウントを続ける)
A[N-1]の値がM-1になった時点で終了


*/



void printArray(int A[], int n){
        // (2,3)の時の初期値は(1,2)
    for(int i = 0; i < n; i++){
        //A[i] = i;
        cout << A[i] << " ";
    }
    cout << endl;

}

void recurInc(int *A,int index, int n){
       
    
}



// 時間超過
int main() {
    int n,m;
    cin >> n >> m;

    bool isFin = false; //  ある最上位桁における終了条件
    int add_n = n;
    bool isOut = false;
    int A[n];
    int indexLast = n-1;    //  最後尾の値から増やしていく

            // (2,3)の時の初期値は(1,2)
    for(int i = 0; i < n; i++){
        A[i] = i + 1;
        //cout << A[i] << " ";
    }
    //cout << endl;
    printArray(A,n);



    for (int i = 0; i < n; i++){    //  やや無駄がある
        if(A[n-1] < m){
            A[n-1]++;
            printArray(A,n);
        }
    }








    /*

    if(n == 1 && m == 1){
        cout << 1 << endl;
    }

    //  2 < m

    for(int i = 1; i < n + 1; i++){
        cout << i << " ";
        for (int j = 1; j < m + 1 ; j++){
            //if(j + n <= m){
                //for(int k = 0; k < n ; k++){
                for(int k = 1; k < n ; k++){                    
                    //cout << j + k << " ";
                    if(j + k <= m){
                        cout << j + k << " ";
                        isOut = true;
                    }
                }
                if(isOut){
                    cout << endl;
                }
                isOut = false;
            //}
        }
    }
    */
   


   for (int i = 0; i < n; i++){

   }


    return 0;
}
