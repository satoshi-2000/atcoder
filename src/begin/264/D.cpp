#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
//#include <cmath>
#include <math.h>
#include <map>
using namespace std;
using std::vector; using std::any_of;
using std::vector; using std::find;
using std::max;
//using std::erase;
//using std::vector::erase;

/*

*/

int main(){
    string s;
    cin >> s;
    int A[7];
    int count = 0;
    int tmp;

    for(int i = 0; i < 7; i++){
        int num;
        switch(s[i]){
            case 'a':
                num = 0;
                break;
            case 't':
                num = 1;
                break;
            case 'c':
                num = 2;
                break;
            case 'o':
                num = 3;
                break;
            case 'd':
                num = 4;
                break;
            case 'e':
                num = 5;
                break;
            case 'r':
                num = 6;
        }
        A[i] = num;
    }

    //  bubble sort

    for (int i = 0; i < 6; i++){
        for(int j = 6; j > i; j--){                        
            if(A[j] < A[j-1]){
                tmp = A[j];
                A[j] = A[j-1];
                A[j-1] = tmp;
                count++;
            }
        }
    }

    cout << count << endl;
        return 0;
}
