#include "TestaValidaNumero.h"

TestaValidaNumero::TestaValidaNumero(){
    cout << "iniciou\n";
}

TestaValidaNumero::~TestaValidaNumero(){

}

void TestaValidaNumero::validaNumero(int num){
    numero = num;
}

int TestaValidaNumero::getValidaNumero(){
    if (numero <= 0){
        cout << "entrou no if\n";
        throw ValorAbaixoException(numero);
    }else {
        return numero;
    }
}
