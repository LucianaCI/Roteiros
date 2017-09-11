#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include <Pagamento.h>
#include<string>


class ControleDePagamentos : public Pagamento{
    public:

            ControleDePagamentos();
            virtual ~ControleDePagamentos();


           void setPagamentos();
           double calculaTotalDePagamentos();
           bool existePagamentoParaFuncionario (std::string nomeFuncionario);
    protected:

            Pagamento pagamentos[10];
};

#endif
