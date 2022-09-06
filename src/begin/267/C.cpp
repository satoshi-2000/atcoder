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

//int maxKadane()
//https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/ (2022/09/03参照)
/*
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
  
    for (int i = 0; i < size; i++)
    {
        //max_ending_here = max_ending_here + a[i];
        max_ending_here = max_ending_here + a[i] * (i+1);
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
  
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}*/

int dp[200010][200010];


// 時間超過
int main() {
    int n,m;
    cin >> n >> m;
    int A[n+1];
    for (int i = 1; i < n + 1; i++){
        cin >> A[i];
    }
    //int max = -2147483648;
    /*
    long long int max = -9223372036854775807;
    long long int sum = 0;

    for(int i = 0; i < n - m + 1; i++){
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
    //  TLE,WA
    
    */

    //long long int max = -9223372036854775807;
    //long long int cur = -9223372036854775807;
    //long long int sum = 0;

    //for(int i = 0; i < n; i++){
     //   cur = max()
        
    //}

    int max_sum = maxSubArraySum(A,n);
    cout << max_sum << endl;    
    return 0;
}
