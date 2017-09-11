#include <iostream>
#include "ControleDePagamentos.h"
#include"Pagamento.h"
#include <string>

using namespace std;

int main()
{

    ControleDePagamentos funcionario1 = ControleDePagamentos();

    funcionario1.setPagamentos();

    funcionario1.calculaTotalDePagamentos();

    funcionario1.existePagamentoParaFuncionario("antonio");
}
