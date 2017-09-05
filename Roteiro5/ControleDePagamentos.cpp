#include "ControleDePagamentos.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

void ControleDePagamentos::setPagamentos(pagamento) {
    this->valorPagamento = pagamento;
}
double ControleDePagamentos::calculaTotalDePagamentos() {
    double total = 0;
    for(int i = 0; i < strlen(pagamentos); i++){
        total+=pagamentos[i].getPagamento();
    }
    return total;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(string nome) {
    for(int i = 0; i < strlen(pagamentos); i++){
        if(nome == pagamentos[i].getNome()){
            return true;
        }
    }
    return false;
}
