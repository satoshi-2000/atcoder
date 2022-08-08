#include <bits/stdc++.h>
#include <vector>
#include <algorithm>    // std::unique,std:remove
using namespace std;
using std::vector; using std::any_of;
using std::vector; using std::find;
using std::max;// using std::erase;


/*
愚直にやると，最初の整数から相異なる3つの要素を選んで、ひたすらカウントして並び替える。
登録されているなら×、登録されていないなら〇としてカウントする。

↑3つの配列を作って、それぞれ格納させればよい(i番目に対応要素はあるか、その時のインデックスでjはあるかみたいに)



ある要素と一致するけれど、それらを含まないベクター要素を求めて、その数を足し上げれば良い


i < j < kは前から見えれば良い


*/


int main() {
    int n;
    cin >> n ;    
    int a[n];
    int i_tmp = 0,j_tmp = 0,k_tmp = 0;
    int comb = 0;
    int vsize;
    int tmp;

    vector<int> v,v_cp,v_cp2;

    for (int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    for (int i = 0; i < n - 2; i++){
        copy(v.begin(),v.end(),back_inserter(v_cp));
        //erase(v_cp,v[i]);   // 今見ている要素と重複する要素を削除
        v_cp.erase(std::remove(v_cp.begin(),v_cp.end(),v[i]),v_cp.end());

        for (int k = 0; k < v_cp.size(); k++){
            cout << v_cp[k] << ' ';
        }
        cout << endl;
        cout << "v_cp" << endl;


        //for (int j = i + 1; j < n - 1; j++){
        for (int j = i + 1; j < n - 1; j++){
            copy(v_cp.begin(),v_cp.end(),back_inserter(v_cp2));
            //erase(v_cp2,v[j]);
            v_cp2.erase(std::remove(v_cp2.begin(),v_cp2.end(),v[j]),v_cp2.end());
            for (int k = 0; k < v_cp2.size(); k++){
                cout << v_cp2[k] << ' ';
            }
            cout << endl;

            //comb += v_cp2.size() - j - 1;
            //comb += v_cp2.size() - j ;
            comb += v_cp2.size();
        }
    }
    /*


    //sort(v.begin(),v.end());

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
   */

    cout << comb << endl;
    
    return 0;
}
