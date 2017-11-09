#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H

#include <exception>

using namespace std;

class ValorAbaixoException : public exception {

public:
    ValorAbaixoException(int);
    virtual ~ValorAbaixoException() throw();
    virtual const char* what() const throw();

protected:
    int numero;
};
#endif 
