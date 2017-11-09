#include <iostream>
#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"

using namespace std;

int main() {


    TestaValidaNumero t;
    int numero;

    cout << "Digite um numero:\n";
    cin >> numero;
    t.validaNumero(numero);

    try {
        t.getValidaNumero();
    }
    catch (ValorAbaixoException e) {
        cout << "Valor abaixo ou igual a 0\n" << e.what() << endl;
    }

    return 0;

}
