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


等差数列SをA,D,Nから求める。

XとのSに含まれる要素との差が最も小さい数が最小回数そのもの


*/

//int s[100];
//long long int s[1000000000000];



// 時間超過
int main() {
    //cout << "for debug" << endl;
    long long int x,a,d;
    //int x,a,d,n;
    //int 
    long int n;
    cin >> x >> a >> d >> n;
    bool isBigger = true;
    bool isSmaller = false;

    //long long int s[1000000000000];   //  格納しようとするからsegmentation faultになりうる。
 
    //long long int s[n]; //  ここでsegmentation fault
    //cout << "for debug" << endl;
    long long int x_diff;
    // = 100000000;

    //s[0] = a;   //  初項

    //s[0] = a;
    //s[1] = a + d;
    //cout << "for debug" << endl;
    x_diff = abs(a - x);
    //x_diff = abs(a) - abs(d);

    ///*
    //for (int i = 1; i < n; i++){
    for (int i = 1; i < n && isBigger; i++){
        //if (x_diff > abs(abs(a + d * i) - abs(x))){

        //if (isBigger){  //  絶対値が小さくなる間
        if (x_diff > abs(a + d * i - x)){
            //x_diff = abs(abs(a + d * i) - abs(x));
            x_diff = abs(a + d * i - x);
        } else {
            isBigger = false;
        }
    }
    //*/

    //while(isBigger){
    //    if(x_diff < abs(a + d))
    //}





/*
    for (int i = 2; i < n; i++){
        s[i] = s[i-1] + d;
    }
    */

    //for (int i = 0; i < n; i++){
    //    s[i] = a + i *d;         
    //}

    //cout << "for debug" << endl;
    /*

    x_diff = abs(s[0] - x);
    for (int i = 1; i < n; i++){
        if (x_diff > abs(s[i] - x)){
            x_diff = abs(s[i] - x);
            //cout << x_diff << 's' << endl;
        }
    }
    */

    //cout << x_diff << endl;
    cout << abs(x_diff) << endl;

     return 0;
}
