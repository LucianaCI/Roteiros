#include "Endereco.h"
#include "Imovel.h"
#include "Casa.h"
#include "Terreno.h"
#include "Apartamento.h"
#include <iostream>
#include <string>

int main(){

Imovel *imoveis[5];
Endereco ende[5];

ende[0].getLogradouro();
ende[0].getBairro();
ende[0].getNumero();
ende[0].getCidade();
ende[0].getCep();
imoveis[0] = new Casa();
imoveis[0] -> getDescricao();


ende[1].getLogradouro();
ende[1].getBairro();
ende[1].getNumero();
ende[1].getCidade();
ende[1].getCep();
imoveis[1] = new Casa();
imoveis[1] -> getDescricao();


ende[2].getLogradouro();
ende[2].getBairro();
ende[2].getNumero();
ende[2].getCidade();
ende[2].getCep();
imoveis[2] = new Terreno();
imoveis[2] -> getDescricao();


ende[3].getLogradouro();
ende[3].getBairro();
ende[3].getNumero();
ende[3].getCidade();
ende[3].getCep();
imoveis[3] = new Terreno();
imoveis[3] -> getDescricao();


ende[4].getLogradouro();
ende[4].getBairro();
ende[4].getNumero();
ende[4].getCidade();
ende[4].getCep();
imoveis[4] = new Apartamento();
imoveis[4] -> getDescricao();

return 0;
}
