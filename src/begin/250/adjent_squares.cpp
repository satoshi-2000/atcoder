#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
using namespace std;
using std::vector; using std::any_of;

  // 
  /*

  隣接最大値 : 4
  性質を見ると、
  ・4つ角 : 2
  ・角であるが、4つ角ではない(a,b)についてa=bではない : 3
  ・他 : 4

  と見ることが出来る


  */

int main() {
    int h,w,r,c;

    cin >> h >> w;
    cin >> r >> c;

    if (h == 1 && w == 1){
        cout << 0 << endl;
    } else if(h == 1 || w == 1){
        if ((r == 1 && c == 1) || (r == 1 && c == w) || (r == h && c == 1)){
            cout << 1 << endl;
        } else{
            cout << 2 << endl;
        }       
    }   // 角か否か
    else if (r == 1 || r == h || w == 1 || c == w){
        // 四隅か否か
        if(r == 1 && c == 1 || r == h && c == 1 || r == 1 && c == w || r == h && c == w){
            cout << 2 << endl;
        } else {
            //cout << "c\t" << c << "d\t" << d << endl;
            cout << 3 << endl;
        }
    } else {
        cout << 4 << endl;
    }
    return 0;
}