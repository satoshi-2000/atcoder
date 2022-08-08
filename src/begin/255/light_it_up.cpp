#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
using namespace std;
using std::vector; using std::any_of;
using std::vector; using std::find;
using std::max;
//using std::erase;
//using std::vector::erase;

/*
置換は大小関係が存在するかどうかで行う
入れ替えた後、再びやっても良い --> iの値を何度も0に更新して、最初からやり直せばよい。

*/


// 時間超過
int main() {
    int n,k;
    cin >> n >> k;
    int a[k];
    int x[n],y[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }



    int range = n - k;
    //int range = n - k - 1;
    int tmp;
    bool isYes = true;




    for (int i = 0; i < range; i++){
        if (a[i] > a[i+k]){
            tmp = a[i];
            a[i] = a[i+k];
            a[i+k] = tmp;
            //  reset state -> tle
            i = 0;            
        }
    }

    for(int i = 0; i < n - 1 && isYes; i++){
        if (a[i] > a[i+1]){
            isYes = false;
        }
    }

    if(isYes){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }

     return 0;
}
