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
    int a,b,c;
    int med,b_tmp,tmp;
    cin >> a >> b >> c;
    b_tmp = b;  


    if (a <= b && b <= c || c <= b && b <= a)  {
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }

/*
    // 小さい順に並べる
    if (a > b){
        tmp = b;
        b = a;
        a = tmp;        
    }

    if (b > c){
        tmp = c;
        c = b;
        b = tmp;
    }

    cout << a << " " << b << " " << c << endl;

    if (b == b_tmp){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    */
        return 0;
}
