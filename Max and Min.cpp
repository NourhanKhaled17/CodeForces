#include <iostream>
using namespace std;

int main()
{
    int A , B , C;
    int min , max;
    cin >> A >> B >> C;

    if(A >= B && A >= C){
        max = A;
        if(B > C){
            min = C;
        }else {
            min = B;
        }
    }else if (B >= A && B >= C) {
        max = B;
        if (A > C){
            min = C;
        }else {
            min = A;
        }

    }else {
        max = C;
        if(A > B){
            min = B;
        }else {
            min = A;
        }
    }



    cout << min << " " << max;
    return 0;
}