#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double A, B, C,D , res1 , res2;
    cin >>A >>B >> C>> D;
    res1 = B*log(A);
    res2 = D*log(C);

    if(res1 > res2){
        cout << "YES";
    }else{
        cout <<"NO";
    }

    return 0;
}