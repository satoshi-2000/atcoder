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
f(x) == Nの時, f(2x) = M
存在するような？

Mは単に2倍すれば良いだけっぽい?

*/
#define MAX 100000
//#define MAX2 100000000000000000000000000
//4444444444444444444444444

long long int MAX2 = 10000000000000000000000000;

int function_sum(int n){
    int sum = 0;
    int tmp_n = 0;

    for(int i = 0; i < 6; i++){
        tmp_n = n % 10;
        n /= 10;
        sum += tmp_n;        
    }

    return sum;

}

int search_M(int N){
    int M = 0;  //  初期値が0の時、最大のMは存在しない。
    int sum = 0;
    for (long long int i = 1; i <= MAX; i++){
        sum = function_sum(i);
        if (sum == N){

        }

    }
    return M;
}

long long int search_x(long long int M,long long int N){
    long long int x = 0;  //  初期値が0の時、最大のMは存在しない。
    bool isExist = false;
    long long int sum = 0;
    long long int sum2 = 0;
    for (long long int i = 1; i <= MAX2 && !isExist; i++){
        sum = function_sum(i); // Mが奇数の時は？ないか (2倍なので、少なくとも2の倍数になるはず?)
        if(sum == M){
            sum2 = function_sum(i/2);
            if(sum2 == N){
                x = i/2; // この時iは必ず偶数
                isExist = true;
            }

        }
    }
    return x;
}

// 時間超過
int main() {
    //static int liN = 100000;
    int N;
    cin >> N;
    //int sum = function_sum(n);
    long long int M = 0;
    //M = search_M(n);
    M = 2 * N;
    long long int x = search_x(M,N);
    cout << M << endl << x << endl;



    //cout << sum << endl;

    return 0;
}
