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

A = (cosθ -sinθ,
    sinθ   cosθ)
を計算すれば良い

*/
// 時間超過
int main() {
    long double a,b,d;    
    cin >> a >> b >> d;
    

    //double pi = 180 / M_1_PI*d;
    long double rad = d * (M_PI / 180.0);
    long double A[2][2];
    long double x,y;

    A[0][0] = cos(rad);
    A[0][1] = -1.0 * sin(rad);
    A[1][0] = sin(rad);
    A[1][1] = cos(rad);

    x = A[0][0] * a + A[0][1] * b;
    y = A[1][0] * a + A[1][1] * b;
    
    //cout << x << " " << y << endl;
    cout << std::setprecision(16) << x << " " << y << endl;
}
