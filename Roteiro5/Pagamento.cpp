#include "Pagamento.h"
#include<iostream>
#include <string>

using namespace std;

Pagamento::Pagamento(){}

Pagamento::~Pagamento(){}

    void Pagamento:: setnomeDoFuncionario(string nome){
                nomeDoFuncionario = nome;

            }
    void Pagamento:: setvalorPagamento(double vp){
                 valorPagamento = vp;
            }


    string Pagamento:: getnomeDoFuncionario(){
                return nomeDoFuncionario;

            }
    double Pagamento:: getvalorPagamento(){
                 return valorPagamento;

            }
