#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>

using namespace std;

class Pagamento {

private:
    float valorPagamento;
    string nomeDoFuncionario;

public:
    Pagamento(string nome, float pagamento);
    string getNome();
    float getPagamento();
    void setNome(string nome);
    void setPagamento(float pagamento);
};



#endif
