#include "Pessoa.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

    Pessoas registro ("", 0, 0);
    int n, i, idade, telefone;
    string nome;

    cout << "---- REGISTRO DE PESSOAS ----\nQuantas pessoas serao registradas?";
    cin >> n;
    for(i=0; i<n; i++){
        cout << "\nRegistro " << i+1 << "\n";
        cout << "Nome: ";
        cin >> nome;

        registro.setNome(nome);

        cout << "Idade: ";
        cin >> idade;

        registro.setIdade(idade);

        cout << "Telefone: ";
        cin >> telefone;

        registro.setTelefone(telefone);
    }
    cout << "\n\nForam registradas " << n << " pessoas.\n";
    return 0;

}
