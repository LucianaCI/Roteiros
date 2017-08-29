#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

float Percent(int c, int k){
    float f;

    f =((float)c*100)/(float)k;
    return f;
}

int main(){

    int votos[100], i = 0, c = 0, j =0, k, a = 0, maior = 0, indice = 0;
    int camisa[23] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
    float f, maiorf = 0;

    cout << "Enquete: Quem foi o melhor jogador?\n\n";

    while (1) {
        cout << "Numero do jogador (0=fim):\n";
        cin >> votos[i];
        if (votos[i] == 0)
            break;

        if(votos[i] < 1 || votos[i] > 23){
            a++;
        }
        i++;
    }

    k = i-a;

    cout << "\nResultado da votacao:\n";
    cout << "\nForam computados:" << k << "votos\n";
    cout << "Com " << a << "voto(s) invalidos\n\n";

     for(i = 0; i < 23; i++){
        c = 0;

        for(j=0; j < k; j++){
            if(camisa[i] == votos[j]){
                c++;
            }
        }
        f = Percent(c,k);

        if(c > maior){
            maior = c;
            indice = i;
        }

        if(f > maiorf){
            maiorf = f;
        }

        if(c != 0){
            cout << i+1 << " " << c << " " << f << "\n";
        }
    }

    cout << "\nO melhor jogador foi o numero" << indice+1 << ", com "<< maior << "votos, correspondendo a" << maior << "dos votos.\n";

    return 0;
}
