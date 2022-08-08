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
SとTについて、先頭から見ていって、
・一致するなら何もしない
・一致しないなら、sの走査上にある文字を増やして、またしても一致する

*/

// 時間超過
int main() {
    string s,t;
    cin >> s;
    cin >> t;
    bool isEqual = true;


    for (int i = 0; i < t.length() && isEqual; i++){
        if(s[i] == t[i]){   //  一致していたら
            //  何もしない
        } else {
            
            if((i + 1) < t.length()){ //  末尾ではない
                if(s[i] == s[i+1]){  //  文字列が連続している
                    s.insert(i, &s[i]); //  文字列を挿入
                } else{
                    isEqual = false;
                }  
            }            
        }
    }
    
   //cout << s[2] << endl;

    if(!isEqual){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
    return 0;
}
