#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
using namespace std;
using std::vector; using std::any_of;
using std::vector; using std::find;
using std::max;


/*
愚直にやると，最初の整数から相異なる3つの要素を選んで、ひたすらカウントして並び替える。
登録されているなら×、登録されていないなら〇としてカウントする。
↑3つの配列を作って、それぞれ格納させればよい(i番目に対応要素はあるか、その時のインデックスでjはあるかみたいに)

*/


int main() {
    int n;
    cin >> n ;    
    int a[n];
    int i_tmp = 0,j_tmp = 0,k_tmp = 0;
    int comb = 0;
    int vsize;
    int tmp;

    vector<int> v;

    for (int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(),v.end());

    // 重複削除 // 1 3 4
    v.erase(unique(v.begin(),v.end()),v.end());

    vsize = v.size();
    cout << "v.size\t" << v.size() << endl;

    


// ある時点で一つ決めたら、次に選べるのは, i -- k --- n  k, k! (k-a)!
   //for(int i = 0; i < v.size() - 2; i++){
    for(int i = 0; i < vsize - 2; i++){
       //for (int j = i + 1; j < v.size() -1; i++){
        for (int j = i + 1; j < vsize -1; j++){
           //comb += v.size() - i - 1;    //  添え字調整用
           comb += vsize - i - 1;    //  添え字調整用
           cout << "check\t" << i << "\t" << j << endl;
       }
   }

    cout << comb << endl;
    return 0;
}
