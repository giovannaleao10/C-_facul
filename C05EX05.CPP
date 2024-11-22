#include <iostream>
using namespace std;

// Função para calcular a prestação (passagem por valor)
float prestacao(int temp, float valor, float tax) {
    return valor + (valor * (tax / 100) * temp);
}

int main() {
    int temp;          // Tempo em meses
    float valor;       // Valor principal
    float tax;         // Taxa de juros (%)
    float resultado;   // Resultado da prestação

    // Entrada de dados
    cout << "Digite o valor principal: ";
    cin >> valor;
    cout << "Digite a taxa de juros (%): ";
    cin >> tax;
    cout << "Digite o tempo em meses: ";
    cin >> temp;

    // Chamada da função com passagem de parâmetro por valor
    resultado = prestacao(temp, valor, tax);

    // Saída do resultado
    cout << "O valor da prestação é: " << resultado << endl;

    return 0;
}

