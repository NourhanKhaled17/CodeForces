#include <iostream>
using namespace std;
int main() {
    int n , steps = 0;
    cin >> n;
    steps = n/5;
    if (n%5 != 0) {
        steps += 1;
    }
    cout << steps ;
    return 0;
}