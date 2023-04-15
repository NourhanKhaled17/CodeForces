#include <iostream>
using namespace std;

int main()
{
    char n;
    cin >> n;

    if (n >= 48 && n <= 60){
        cout <<"IS DIGIT";
    }else if(n >= 65 && n <= 90){
        cout <<"ALPHA\n";
        cout <<"IS CAPITAL";
    }else if(n >= 97 && n <= 122){
        cout <<"ALPHA\n";
        cout <<"IS SMALL";
    }

    return 0;
}