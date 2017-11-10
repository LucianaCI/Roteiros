#ifndef SALDONAODISPONIVELEXCEPION_H
#define SALDONAODISPONIVELEXCEPION_H

#include <exception>

using namespace std;

class SaldoNaoDisponivelException : public exception {

public:
    SaldoNaoDisponivelException(double saldo, double valor);
    virtual ~SaldoNaoDisponivelException() throw();
    virtual const char* what() const throw();

protected:
    double saldo, valor;

};
#endif
