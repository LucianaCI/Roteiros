#include <iostream>

#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"
#include "SaldoNaoDisponivelException.h"

using namespace std;

int main()
{
    Conta lc[50];
    Conta *lc2 = new Conta[50];


    Conta *c = new Conta("Joao", 12345, 1000, 130);
    ContaEspecial *ce = new ContaEspecial("Maria", 12346, 1500, 520);

    c->exibe();
    

    try {
        c->sacar(140);        
        c->depositar(100); 
        ce->sacar(5000);    
        ce->sacar(500);
    }
    catch (SaldoNaoDisponivelException e) {
        cout << "Saldo nao disponivel " << e.what() << endl;
    }

    return 0;
}
