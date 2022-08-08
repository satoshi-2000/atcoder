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


int main(){
    int l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
    bool isRed[100],isBlue[100];
    int count = 0;

    for (int i = 0; i < 100; i++){
        isRed[i] = false;
        isBlue[i] = false;
    }

    for(int i = l1; i < r1; i++ ){
        isRed[i] = true;
    }

    for(int i = l2; i < r2; i++ ){
        isBlue[i] = true;
    }


    for (int i = 0; i < 100; i++){
        if(isRed[i] && isBlue[i]){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
