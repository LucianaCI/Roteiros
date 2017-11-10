#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{
 
}

ContaEspecial::ContaEspecial(std::string nome, int numConta, double salario, double saldo)
        : Conta(nome, numConta, salario, saldo)
{
    definirLimite();
}

ContaEspecial::~ContaEspecial()
{

}

void ContaEspecial::definirLimite() {
    limite = salarioMensal*3;
}
