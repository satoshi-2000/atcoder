#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
using namespace std;
using std::vector; using std::any_of;


int main() {
    int n,w;
    cin >> n >> w;
    int a[n];
    int good_num = 0;
    bool good_array[w+1];

    for (int i = 0; i < w + 1; i++){
        good_array[i] = false;
    }


    int sum;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    // 1つのみを選ぶ
    for (int i = 0; i < n; i++){
        if (a[i] <= w){            
            good_array[a[i]] = true;
            //cout << a[i] << endl;
        }
    }
    //cout << "---2---" << endl;

    // 2つ選ぶ
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n, i != j; j++){
            sum = a[i] + a[j];
            if ( sum <= w){
                good_array[sum] = true;
                //cout << sum << endl;
            }
        }
    }

    //cout << "---3---" << endl;

    // 3つ選ぶ
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n && i != j; j++){
            for (int k = 0; k < n && j != k && i != k; k++){
                sum = a[i] + a[j] + a[k];
                if (sum <= w){
                    good_array[sum] = true;
                    /*
                    cout << sum << endl;
                    cout << "i : " << i << endl;
                    cout << "j : " << j << endl;
                    cout << "k : " << k << endl;
                    */
                }
            }
        }
    }

    //cout << "---output---" << endl;

    for (int i = 0; i < w + 1; i++){
        if(good_array[i]){
            //cout << i << endl;
            good_num++;
        }
    }



    cout << good_num << endl;   

    return 0;
}
