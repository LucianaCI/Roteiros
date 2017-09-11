#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include<string>


class Pagamento
{
    public:

            Pagamento();
            virtual ~Pagamento();


            void setnomeDoFuncionario(std:: string nome);
            void setvalorPagamento(double vp);


             std:: string getnomeDoFuncionario();
             double getvalorPagamento();

    protected:


            double valorPagamento;
            std:: string nomeDoFuncionario;


    private:
};

#endif
