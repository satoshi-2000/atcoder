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

#define num 998244353


/*
N - x 998244353で +

0 <= x


*/

//long long int num = 998244353;

// 時間超過
int main() {
    long long int n;
    cin >> n;
//    long long int num = 998244353;

    long long int x = 1;

    //  x == 0;

    if(n % num == 0){
        cout << 0 << endl;
    } else{
        while(x < num && ((n - x) % num  != 0)){
            x++;
        }

        if((n - x) % num == 0){
            cout << x << endl;
        }

    }
    //long long int x = n - 998244353;

    //cout << x << endl;
    return 0;
}
