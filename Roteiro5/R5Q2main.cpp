#include<iostream>
#include<string>
#include "R5Q2.h"

int main(){


InVoice produto(3, "macarrao", 4, 4.20);

cout << "---- DIGITE O TIPO, A QUANTIDADE E O PRECO DO PRODUTO ----\n";
cin >> produto.descricao >> produto.quantidade >> produto.preco;

if(produto.quantidade < 0){
	produto.quantidade = 0;
}

if(produto.preco < 0){
	produto.preco = 0.0;
}


cout << "\nA sua fatura eh: " << produto.getInvoiceAmount() << "\n";

return 0;

}








