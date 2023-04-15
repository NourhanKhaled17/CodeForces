#include <iostream>
using namespace std;

int main()
{
    int A , B , C;
    cin >> A >> B >> C;

    if(A <= B && A <= C){
        cout << A << "\n";
        if (B <= C){
            cout << B <<"\n" ;
            cout << C <<"\n" ;
        }else {
            cout << C << "\n";
            cout << B << "\n";
        }
    }else if (B <= A && B <= C) {
        cout << B << "\n";
        if (A <= C){
            cout << A <<"\n" ;
            cout << C <<"\n" ;
        }else {
            cout << C <<"\n" ;
            cout << A <<"\n" ;
        }
    }else {
        cout << C << "\n" ;
        if (A <= B){
            cout << A <<"\n" ;
            cout << B <<"\n" ;
        }else{
            cout << B <<"\n" ;
            cout << A <<"\n" ;
        }
    }

    cout << "" << endl;
    cout << A <<"\n" ;
    cout << B <<"\n" ;
    cout << C <<"\n" ;

    return 0;
}