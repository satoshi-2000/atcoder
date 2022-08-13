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
    
    //  true : black, false : white
    bool gridArray[15][15] = {{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                            {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                            {1,0,1,1,1,1,1,1,1,1,1,1,1,0,1},
                            {1,0,1,0,0,0,0,0,0,0,0,0,1,0,1},
                            {1,0,1,0,1,1,1,1,1,1,1,0,1,0,1},
                            {1,0,1,0,1,0,0,0,0,0,1,0,1,0,1},                            
                            {1,0,1,0,1,0,1,1,1,0,1,0,1,0,1},    
                            {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1}, // 8
                            {1,0,1,0,1,0,1,1,1,0,1,0,1,0,1},
                            {1,0,1,0,1,0,0,0,0,0,1,0,1,0,1},
                            {1,0,1,0,1,1,1,1,1,1,1,0,1,0,1},
                            {1,0,1,0,0,0,0,0,0,0,0,0,1,0,1},
                            {1,0,1,1,1,1,1,1,1,1,1,1,1,0,1},
                            {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                            {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
                            };

    int r,c;
    cin >> r >> c;

    if(gridArray[r-1][c-1]){
        cout << "black" << endl;
    } else {
        cout << "white" << endl;
    }    
        return 0;
}
