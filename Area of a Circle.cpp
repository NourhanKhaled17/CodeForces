#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout << fixed << setprecision(9);
    double R;
    cin >> R;
    cout << (3.141592653)*R*R ;
}