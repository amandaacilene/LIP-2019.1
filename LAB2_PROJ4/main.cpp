#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, soma = 0, media = 0, produto = 0;

    cout << "Entre com três valores inteiros: ";
    cin >> n1 >> n2 >> n3;

    soma = n1 + n2 + n3;

    media = soma / 3;

    produto = n1 * n2 * n3;

    // Fazer função Menor que e Maior que

    cout << "Soma: " << soma << endl << "Média: " << media << endl << "Produto: " << produto << endl << "O menor: " << endl << "O maior: ";

    return 0;
}
