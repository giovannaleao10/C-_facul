#include <iostream>
using namespace std;

// Fun��o para calcular a presta��o (passagem por valor)
float prestacao(int temp, float valor, float tax) {
    return valor + (valor * (tax / 100) * temp);
}

int main() {
    int temp;          // Tempo em meses
    float valor;       // Valor principal
    float tax;         // Taxa de juros (%)
    float resultado;   // Resultado da presta��o

    // Entrada de dados
    cout << "Digite o valor principal: ";
    cin >> valor;
    cout << "Digite a taxa de juros (%): ";
    cin >> tax;
    cout << "Digite o tempo em meses: ";
    cin >> temp;

    // Chamada da fun��o com passagem de par�metro por valor
    resultado = prestacao(temp, valor, tax);

    // Sa�da do resultado
    cout << "O valor da presta��o �: " << resultado << endl;

    return 0;
}

