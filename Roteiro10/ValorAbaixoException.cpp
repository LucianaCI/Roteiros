#include "ValorAbaixoException.h"
#include <iostream>

ValorAbaixoException::ValorAbaixoException(int numero)
{
    this-> numero = numero;
}

ValorAbaixoException::~ValorAbaixoException() throw()
{
  
}

const char* ValorAbaixoException::what() const throw() {
    char * texto = new char[50];
    sprintf(texto, "NUMERO = %d", numero);
    return (const char *)texto;
}
