#include <iostream>
using namespace std;

int main()
{
    int n1 , n2 , n3;
    char s;
    char q = '=';
    cin >> n1 >> s >> n2 >> q >> n3;

    if(s == '+'){
        if((n1+n2)==n3){
            cout <<"Yes";
        }else{
            cout << (n1+n2);
        }
    }else if (s == '-'){
        if((n1-n2)==n3){
            cout <<"Yes";
        }else{
            cout << (n1-n2);
        }
    }else if(s == '*'){
        if((n1*n2)==n3){
            cout <<"Yes";
        }else{
            cout << (n1*n2);

        }
    }

    return 0;
}