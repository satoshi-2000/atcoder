#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
using namespace std;
using std::vector; using std::any_of;
using std::vector; using std::find;
using std::max;


/*
文字列の中で、最も少なく含まれている文字を


*/


// 時間超過
int main() {
    int h,w;
    cin >> h >> w;
    //string s[h][w];
    char s[h][w];
    //string s[h];

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cin >> s[i][j];
        }        
    }



    int x1,y1,x2,y2;    //  各駒の座標
    bool isFirst = true;
    bool isSecond = true;
    int diff = 0;
    
    for (int i = 0; i < h && (isFirst || isSecond); i++){
        for (int j = 0; j < w && (isFirst || isSecond); j++){
            if(s[i][j] == 'o'){
            //if(s[i][j] == "o"){
                
                if(isFirst){
                    x1 = j;
                    y1 = i;
                    //cout << x1 << " " << y1 << endl;
                    //isFirst = false;
                }
                if(!isFirst && isSecond){
                    x2 = j;
                    y2 = i;
                    //cout << x2 << " " << y2 << endl;
                    isSecond = false;
                }                
                isFirst = false;
            }
            //isFirst = false;
        }
    }

    //cout << x1 << x2 << y1 << y2 << endl;
    diff = abs(x1 - x2) + abs(y1 - y2);

    cout << diff << endl;

    return 0;
}
