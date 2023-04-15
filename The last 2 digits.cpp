#include <iostream>
using namespace std;

int main()
{
    int A , B , C , D , W;
    cin >> A >> B >> C >> D;

    A %=100;
    B %=100;
    C %=100;
    D %=100;

    W = A*B*C*D;
    if (W%100 <=9){
        cout << 0;
    }
    cout << W%100;

    return 0;
}