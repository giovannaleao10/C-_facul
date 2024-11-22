#include<iostream>

using namespace std;

int main(void){

    float  n1, n2, n3, n4, md;

    cout << "Nota = "; cin >> n1;
    cout << "Nota = "; cin >> n2;
    cout << "Nota = "; cin >> n3;
    cout << "Nota = "; cin >> n4;

    md = (n1 + n2 + n3+ n4)/4;

    if(md > 5){
        cout << "Aprovado, tirou " << md;
    }
    else{
        cout << "Reprovado, tirou " << md;
    }
    return 0;
}
