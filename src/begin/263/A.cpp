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
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;

    bool isThree = false;
    bool isTwo = false;

    int countNum[13] = {0};

    for (int i = 0; i < 13; i++){
        countNum[i] = 0;
    }

    countNum[a-1]++;
    countNum[b-1]++;
    countNum[c-1]++;
    countNum[d-1]++;
    countNum[e-1]++;

    for(int i = 0; i < 13; i++){
        if(countNum[i] == 3){
            isThree = true;
        } else if(countNum[i] == 2){
            isTwo = true;
        }
    }

    if(isThree && isTwo){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }

    return 0;
}
