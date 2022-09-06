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
    int n,m;
    cin >> n >> m;
    int A[n+1];
    for (int i = 1; i < n + 1; i++){
        cin >> A[i];
    }
    int max = -1 * 999999999;
    int sum = 0;

    for(int i = 1; i < n - m + 2; i++){
        sum = 0;
        //for(int j = 1; j < m + 1; j++){
            for(int k = 0; k < m; k++){
                sum += (k+1) * A[i+k];
                //cout << "A[i+k]\t" << A[i+k] << "\t" << i << endl;
            }
        //}
        if(sum > max){
            max = sum;
        }
    }
    cout << max << endl;
    return 0;
}
