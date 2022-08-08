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
    int n,k;
    cin >> n >> k;    
    int a[n],b[k];
    int max_val = 0;
    bool isDislike = false;

    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (max_val < a[i]){
            max_val = a[i];
        }
    }

    for (int i = 0; i < k; i++){
        cin >> b[i];
    }

    for (int i = 0; i < k && !isDislike; i++){
        if(a[b[i]- 1] == max_val){
            isDislike = true;
        }        
    }

    if (isDislike){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
    return 0;
}
