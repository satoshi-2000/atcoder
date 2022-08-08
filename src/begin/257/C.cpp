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

*/

void printIsExist(bool isExist[],int q){
    for (int i = 0; i < q; i++){
        cout << isExist[i] << " ";
    }
    cout << endl;
}


// 時間超過
int main() {
    int n,k,q;
    cin >> n >> k >> q;
    int a[k];
    int l[q];
    bool isExist[n];    
    int xright = 0;
    int count = 0;  //  操作回数
    int xl = 0; //  左からl[i]個目のマスの座標

    for (int i = 0; i < k; i++){
        cin >> a[i]; 
    }

    //xright = a[k-1]; //  一番右のマスに設定            
    xright = q - 1; //  走査上の一番右のマスに設定

    for (int i = 0; i < q; i++){
        cin >> l[i];
        //isExist[i] = false;
    }

    for (int i = 0; i < n; i++){        
        isExist[i] = false;
    }


    // マスの設定
    for(int i = 0; i < k; i++){
        isExist[a[i]-1] = true;
    }

    /*

    //for (int i = q - 1; i > 0  && count < q; i--){
    for (int i = 0; count < q; i++){
        if(isExist[i]){
            if (i != xright){    //  一番右のマスではない
                if (!isExist[i+1]){ //  1つ右のマスにコマが置かれていない
                    isExist[i] = false;
                    isExist[i+1] = true;    //  右のマスに移動
                }                
            } else {    //  走査上で一番右のマスに移動した時、走査するマスを一つ左にずらす
                xright--;   
            }
            count++;
            i = xright;  //  走査対象を右に戻す

            printIsExist(isExist,q);
        }
    }
    */

    //for (int i = q - 1; i > 0  && count < q; i--){

    // マス1から操作を行う    
    for (int i = 0; i < q; i++){
        count = 0;  //  countのリセット
        for (int j = 0; j < n && count != l[i]; j++){    //  左からl[i]個目のマスの番地を求める
            if(isExist[j]){
                count++;
                if(count == l[i]){
                    xl = j;
                }
            }
        }  

        if (xl < n - 1){    //  一番右のマスではない
            if (!isExist[xl+1]){ //  1つ右のマスにコマが置かれていない
                isExist[xl] = false;
                isExist[xl+1] = true;    //  右のマスに移動
            }                
        }      
        //printIsExist(isExist,n);
        
        /*
        if(isExist[l[i]-1]){
            if (l[i-1] != q){    //  一番右のマスではない
                if (!isExist[l[i]]){ //  1つ右のマスにコマが置かれていない
                    isExist[l[i]-1] = false;
                    isExist[l[i]] = true;    //  右のマスに移動
                }                
            }// else {    //  走査上で一番右のマスに移動した時、走査するマスを一つ左にずらす
            //    xright--;   
            //}
            //count++;
            //i = xright;  //  走査対象を右に戻す

            printIsExist(isExist,q);
        }
        */
       //printIsExist(isExist,q);
    }

    for (int i = 0; i < n; i++){
        if(isExist[i]){
            cout << i + 1 << " ";
        }
    }
    cout << endl;
     return 0;
}
