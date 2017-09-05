#include"Pagamento.h"
#include"ControleDePagamentos.h"
#include<iostream>
#include<string>
#include<cstring>


using namespace std;


int main(){
    ControleDePagamentos sistema[10];
    Pagamento registro[10];
    int i, n;

    cout<<"---- CONTROLE DE PAGAMENTOS ----\n";
    cout<<"Quantos funcionarios serao verificados? ";
    cin >> n;
    for(i=0; i<n; i++){
        cout<<"Funcionario "<< i+1<< "\n";
        cout<<"Nome: ";
        cin>> registro[i].nomeDoFuncionario;
        cout<<"\nValor do pagamento: ";
        cin>> registro[i].valorPagamento;
    }

sistema->setPagamentos(registro);

    cout<<"Numero total de pagamentos: "<< sistema->calculaTotalDePagamentos();

return 0;
}
