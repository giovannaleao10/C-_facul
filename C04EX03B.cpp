#include<iostream>

using namespace std;

int main(void){

    int n;

    cout <<"Numero = "; cin >> n;

    if(n > 0){
        cout << "Numero = " << n;
    }
    else{
        cout << "Numero = " << n * -1;
    }
    return 0;
}
