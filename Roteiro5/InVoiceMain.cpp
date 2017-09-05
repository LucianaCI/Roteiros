#include<iostream>
#include<string>
#include "InVoice.h"

int main(){


InVoice produto(3, "macarrao", 4, 4.20);
string tipo;
int quant;
float preco;

cout << "---- DIGITE O TIPO, A QUANTIDADE E O PRECO DO PRODUTO ----\n";
cin >> tipo >> quant >> preco;

produto.setDescricao(tipo);
produto.setQuantidade(quant);
produto.setPreco(preco);

if(quant < 0){
	quant = 0;
}

if(preco < 0){
	preco = 0.0;
}


cout << "\nA sua fatura eh: " << produto.getInvoiceAmount() << "\n";

return 0;

}








