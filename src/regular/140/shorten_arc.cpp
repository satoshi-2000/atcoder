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
    int n;
    string s;
    cin >> n ;
    cin >> s;
    bool is_ope_ble = true; // 操作可能    
    //string s_array[n];  // acceptされた文字列を格納
    int op_max = 0;
    string p = "ARC";
    int position;

    //while(is_ope_ble && op_max < 1000000){
    while(is_ope_ble){
        position = s.rfind(p);

        if (position == std::string::npos){
            is_ope_ble = false;
        } else {
            if ((op_max + 1 ) % 2 == 1){
                s = std::regex_replace(s,std::regex(p), "R",std::regex_constants::format_first_only);
            } else {
                s = std::regex_replace(s,std::regex(p), "AC",std::regex_constants::format_first_only);
            }
            op_max++;            
        }
    }

    cout << op_max << endl;

    return 0;
}
