#include<iostream>
using namespace std;

int main(void){

    int a, b, x;

    cin >> a;
    cin >> b;

    x = a;
    a = b;
    b = x;

    cout << a << endl;
    cout << b;

    return 0;
}
