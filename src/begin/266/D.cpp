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

    // 外積計算
//int crossProduct(int Ax,int Ay, int Bx, int By){
double crossProduct(int Ax,int Ay, int Bx, int By){
    return (double)Ax * (double)By - (double)Bx * (double)Ay;
}


// 時間超過
int main() {
    int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
    cin >> Ax >> Ay;
    cin >> Bx >> By;
    cin >> Cx >> Cy;
    cin >> Dx >> Dy;
    bool isConv = true;

    double vec[4][2];

    //  AB (B-A)
    vec[0][0] = Bx - Ax;
    vec[0][1] = By - Ay;

    //  BC(C-B)
    vec[1][0] = Cx - Bx;
    vec[1][1] = Cy - By;

    //  CD(D-C)
    vec[2][0] = Dx - Cx;
    vec[2][1] = Dy - Cy;

    //  DA(A-D)
    vec[3][0] = Ax - Dx;
    vec[3][1] = Ay - Dy;

    double crossResult[4];

    crossResult[0] = crossProduct(vec[0][0],vec[0][1],vec[1][0],vec[1][1]); //  AB-BC
    crossResult[1] = crossProduct(vec[1][0],vec[1][1],vec[2][0],vec[2][1]); //  BC-CD
    crossResult[2] = crossProduct(vec[2][0],vec[2][1],vec[3][0],vec[3][1]); //  CD-DA
    crossResult[3] = crossProduct(vec[3][0],vec[3][1],vec[0][0],vec[0][1]); //  DA-AB


    for(int i = 0; i < 4 && isConv; i++){
        if(crossResult[i] < 0){
            isConv = false;            
        }
        //cout << crossResult[i] << endl;
    }


    if(isConv){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
