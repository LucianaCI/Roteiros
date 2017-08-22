#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    int maior, i, ar[100];

    maior = 0;

    cout << "---- DIGITE UM NUMERO ----\n";

    for(i=0; i < 100; i++){
        cin >> ar[i];
        if(ar[i] == 0){
            break;
        }
        if(ar[i] > maior){
            maior = ar[i];
        }
        i++;
    }
    cout << "O MAIOR NUMERO DIGITADO FOI: ";
    cout << maior << " ";

}
