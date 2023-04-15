#include <iostream>
using namespace std;

int main()
{
    int n, years= 0 , months= 0 , days= 0;
    cin >> n;

    while (n >= 365){
        years+=1;
        n = n-365;
    }
    while( n < 365 && n >= 30){
        months += 1;
        n = n-30;
    }

    cout << years << " years" <<"\n";
    cout << months << " months" <<"\n";
    cout << n << " days" << "\n";

    return 0;
}