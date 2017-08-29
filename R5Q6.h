#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>

using namespace std;

class Pagamento {
public:
    float valorPagamento;
    string nomeDoFuncionario;

    Pagamento(string nome, float pagamento);

    string getNome();
    float getPagamento();
    void setNome(string nome);
    void setPagamento(float pagamento);
};

class ControleDePagamentos{
public:
    Pagamento pagamentos[10];

    void setPagamentos(Pagamento pagamentos[]);

    double calculaTotalDePagamentos();
    bool existePagamentoParaFuncionario (string nomeFuncionario);
};

#endif
