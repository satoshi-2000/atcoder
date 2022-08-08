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
    int tmp;

    vector<int> v;

    for (int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(),v.end());

    // 重複削除 // 1 3 4
    v.erase(unique(v.begin(),v.end()),v.end());

/*
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    */

   // 1 2 3 4 5 6 7 8

   cout << "v.size" << v.size() << endl;

// ある時点で一つ決めたら、次に選べるのは, i -- k --- n  k, k! (k-a)!
   for(int i = 0; i < v.size() - 2; i++){
       for (int j = i + 1; j < v.size() -1; i++){
           comb += v.size() - i - 1;    //  添え字調整用
       }
   }

   cout << comb << endl;

    //bool isInclude[200000] = {false};
    //int i_list[200000];
    //int j_list[200000];
    //int k_list[200000];

    // 相異なるなので、先に重複要素を除去したら早い。


/*

    
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (max_val < a[i]){
            max_val = a[i];
        }
    }

    // 全要素の組み合わせをやるにあたって、i番目の要素が既に含まれていない場合が楽そう
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n && i != j; j++){
            for (int k = 0; k < n && i != k && j != k){

                if(a[i] == a[j] || a[j] == a[k] || a[i] == a[k]){
                    // 何もしない
                } else{
                    i_tmp = a[i];
                    j_tmp = a[j];
                    k_tmp = a[k];

                    // 順序変更
                    if (i_tmp > j_tmp){
                        tmp = j_tmp;
                        j_tmp = i_tmp;
                        i_tmp = tmp;
                    }
                    if (j_tmp > k_tmp){
                        tmp = j_tmp;
                        j_tmp = i_tmp;
                        i_tmp = tmp;
                    }
                    if (i_tmp != j_tmp && i_tmp != k_tmp && j_tmp != k_tmp){
                    }

                    if ()
                }
            }
        }

    }





    for (int i = 0; i < k; i++){
        cin >> b[i];
    }

    for (int i = 0; i < k && !isDislike; i++){
        if(a[b[i]- 1] == max_val){
            isDislike = true;
        }        
    }

    if (isDislike){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
    */
    return 0;
}
