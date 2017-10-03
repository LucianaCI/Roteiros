#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

#include <iostream>
#include <string>

using namespace std;

int main(){

Conta *contaGeral;
ContaEspecial *contaEspecial;

cout<< "----CADASTRO DE CONTAS---\n\n";
cout << "Cliente #1\n";
contaGeral = new Conta();
Conta("Luciana Serrao e Silva", 3000, 123456, 92.873);
contaGeral->definirLimite(3000);
contaGeral->sacar(1000);
contaGeral->depositar(3247.9);

cout << "\n\nCliente #2\n";
contaEspecial = new ContaEspecial();
ContaEspecial("Lucas Moda", 2500.12, 78910, 87.234);
contaEspecial->definirLimite(2500.12);
contaEspecial->sacar(25.90);
contaEspecial->depositar(345);









return 0;
}
