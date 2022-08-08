#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
using namespace std;
using std::vector; using std::any_of;

  // 
  /*


  */

int main() {
    string s;

    cin >> s;
    int length = s.length();

    string s2 = s;

    while(s2.length() < 6){
        s2 = s2 + s;
    }

    cout << s2 << endl;

/*

    if(length == 1){
    //cout << std::string(6,s);
    
        for (int i = 0; i < 6; i++){
            cout << s;
        }

    //string s2 = std::string(6,s);
    } else if (length == 2){
        for (int i = 0; i < 6; i++){
            cout << s;
        }

    }
    cout << s2 << endl;
*/    
    return 0;
}
