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


// 時間超過
int main() {
    string s;
    cin >> s;

    string day[5] = {"Monday","Tuesday","Wednesday","Thursday","Friday"};
    int cul[5] = {5,4,3,2,1};

    for (int i = 0; i < 5; i++){
        if(day[i] == s){
            cout << cul[i] << endl;
        }
    }    return 0;
}
