#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
using namespace std;
using std::vector; using std::any_of;
using std::vector; using std::find;
using std::max;
//using std::erase;
//using std::vector::erase;


// 時間超過
int main() {
    int k;
    cin >> k;
    int h=0,m=0;

    h = k / 60;
    m = k % 60;
    
    if(m >= 10){
        //cout >> string(21+h) >> ":" >> string(m) >> endl;
        printf("%d:%d\n",21+h,m);
    } else{
        //cout >> string(21+h) >> ":" >> "0" >> string(m) >> endl;
        printf("%d:0%d\n",21+h,m);
    }
     return 0;
}
