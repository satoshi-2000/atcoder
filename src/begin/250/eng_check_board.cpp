#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
using namespace std;
using std::vector; using std::any_of;

  // 
  /*


  */

int main() {
    int h,w,r,c;
    int n,a,b;
    bool isWhite = false; // falseの時Black  

    cin >> n >> a >> b;

    bool isColor[n*a][n*b];

    for (int i = 0; i < n * a; i++){
        if (i % a == 0 && i != 0){
        //if (i % 2 == 0 && i != 0){
            isWhite = !isWhite;
        }
        for (int j = 0; j < n * b; j++){
            //if (j % b == 0 && (i != 0 && j != 0)){  //  (1,1) : whiteのため
            //if (j % b == 0 && (i != 0 )){  //  (1,1) : whiteのため
            if (j % b == 0){
            //if (j % 2 == 0){
            //if (j % n == 0){
                isWhite = !isWhite;
            }
            isColor[i][j] = isWhite;
        }

        //if (i % a == 0){
        //if ((i+1) % a == 0){
    }

    for (int i = 0; i < n * a; i++){
        for (int j = 0; j < n * b; j++){
            if(isColor[i][j]){
                cout << ".";
            } else {
                cout << "#";
            }
        }
        cout << endl;   // 改行    
    }
    return 0;
}