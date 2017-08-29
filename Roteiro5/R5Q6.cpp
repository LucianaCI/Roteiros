

#include "R5Q6.h"
#include <iostream>
#include <cstring>

using namespace std;

Pagamento::Pagamento(string nome, float pagamento) {
    this->nomeDoFuncionario = nome;
    this->valorPagamento = pagamento;
}

void Pagamento::setNome(string nome) {
    this->nomeDoFuncionario = nome;
}
void Pagamento::setPagamento(float pagamento) {
    this->valorPagamento = pagamento;
}
string Pagamento::getNome() {
    return nomeDoFuncionario;
}
float Pagamento::getPagamento() {
    return valorPagamento;
}

double ControleDePagamentos::calculaTotalDePagamentos() {
    double total = 0;
    for(int i = 0; i < strlen(pagamentos); i++){
        total+=pagamentos[i].getPagamento();
    }
    return total;
}
bool ControleDePagamentos::existePagamentoParaFuncionario(string nome) {
    for(int i = 0; i < strlen(pagamentos); i++){
        if(nome == pagamentos[i].getNome()){
            return true;
        }
    }
    return false;
}

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
