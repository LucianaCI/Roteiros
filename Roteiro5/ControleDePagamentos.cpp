#include "ControleDePagamentos.h"
#include"Pagamento.h"
#include<iostream>
#include <string>

using namespace std;

 int i = 0, n = 2;


ControleDePagamentos::ControleDePagamentos(){}

ControleDePagamentos::~ControleDePagamentos(){}

void ControleDePagamentos:: setPagamentos(){

    string nome;
    double vp;

      for(int i = 0; i<n; i++){

            cout<< "Qual o nome do funcionario?";

                    cin>>nome;

            cout<< "Qual o valor do pagamento?";

                     cin>>vp;


                    pagamentos[i].setnomeDoFuncionario(nome);
                    pagamentos[i].setvalorPagamento(vp);
            }
    }

double ControleDePagamentos:: calculaTotalDePagamentos(){

    int soma =0;

        for(int i = 0; i<n; i++){

                soma += pagamentos[i].getvalorPagamento();
                }
                    cout<< "\n O valor total dos pagamentos realizados eh :"<< soma;

           }


bool ControleDePagamentos:: existePagamentoParaFuncionario (string nomeFuncionario){

cout<< "\nPara qual funcionario voce deseja verificar se existem pagamentos?";
cin>> nomeFuncionario;

    for(i = 0; i< n ; i++){
        if (nomeFuncionario == pagamentos[i].getnomeDoFuncionario()){
                    cout << "\nExiste ao menos um pagamento para este funcionario\n";
                    return true;
                }else{
                    cout << "\nNao existe pagamentos para este funcionario\n";
                    return false;
            }

    }

}
