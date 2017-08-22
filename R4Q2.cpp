#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

int main(){

    int alet, advinha;

    srand(time(0));
    alet = (rand()%100) + 1;

    //cout << alet;

    cout << "TENTE ADVINHAR O NUMERO SORTEADO:\n";

    while(1){
        cin >> advinha;

        if(advinha < alet){
            cout << "\nMUITO BAIXO. TENTE NOVAMENTE\n";
        }

        if(advinha > alet){
            cout << "\nMUITO ALTO. TENTE NOVAMENTE\n";
        }

        if(advinha == alet){
            cout << "\nACERTOU MIZERAVI\n";
            break;
        }

    }
