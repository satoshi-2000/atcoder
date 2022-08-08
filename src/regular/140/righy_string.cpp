#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
using namespace std;
using std::vector; using std::any_of;
using std::vector; using std::find;


/*
文字列の中で、最も少なく含まれている文字を


*/


// 時間超過
int main() {
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    string s_array[n];  // acceptされた文字列を格納
    int original_s = 0;


    for (int i = 0; i < n; i++){
        for (int j = 0; j < original_s; j++){

        }        

    }


    int t[n];
    
    //string o[n]; // originalな文字列群
    //vector<string> s = {};
    int max = 0;
    //string tmp_s;
    bool is_original = true;
    int max_idx = 0;

    for (int i = 0; i < n; i++){
        cin >> s[i] >> t[i];
        //cin >> s[i] >> tmp_s;
        //s.push_back(tmp_s);
    }

    for ( int i = 0; i < n; i++){
        if (max < t[i]){
            is_original = true;
            for (int j = 0; j < i && is_original; j++){
                if(s[j] == s[i]){
                    is_original = false;
                }
            }
            if(is_original){
                max = t[i];
                max_idx = i;
            }
        }

    }
    cout << max_idx + 1 << endl;


/*
    max = *max_element(t,t + n);
    for (int i = 0; i < n; i++){
        //if(t[i] == max && !(*find(s.begin(),s.begin() + i - 1 , s[i]))){

        if(t[i] == max){
            is_original = true;
            for (int j = 0; j < i && is_original; j++ ){
                if(t[j] == t[i]){
                    is_original = false;
                }
            }

            if(is_original){
                cout << i  << endl;
            } else{
                i = n; // 強制終了
            }
            
        }            
    }
*/
    return 0;
}
