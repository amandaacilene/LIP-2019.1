#include <iostream>

using namespace std;

int main()
{
    int n1, n2, soma = 0, produto = 0, diferenca = 0, quociente = 0;

    cout << "Digite dois inteiros:\n";
    cin >> n1 >> n2;

    soma = n1 + n2;

    produto = n1 * n2;

    diferenca = n1 - n2;

    quociente = n1 / n2;

    cout << "Soma: " << soma << endl << "Produto: " << produto << endl << "Diferença: " << diferenca << endl << "Quociente: " << quociente << endl;

    return 0;
}
