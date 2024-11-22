#include<iostream>

using namespace std;

int main(void){

    int a , b, r;

    cin >> a;
    cin >> b;

    if(a > b){
        r = a - b;
        cout << "Diferenca = " << r;
    }
    else{
        r = b - a;
        cout << "Diferenca = " << r;
    }
    return 0;
}
