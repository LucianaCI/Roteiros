#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H

#include "Pagamento.h"

class ControleDePagamentos{

private:
    Pagamento pagamentos[10];

public:
    void setPagamentos(Pagamento pagamentos[]);
    double calculaTotalDePagamentos();
    bool existePagamentoParaFuncionario (string nomeFuncionario);
};

#endif
