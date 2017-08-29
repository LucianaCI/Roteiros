#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

int main(){
    int n, alet, i = 0;
    float a, b, c, d, e, f;
    a = b = c = d = e = f = 0;

    cout << "QUANTAS VEZES VOCE QUER JOGAR O DADO?\n";
    cin >> n;

    srand(time(0));
    while(i < n){
        alet = (rand()%6) + 1;

        if(alet == 1){
            a++;
        }
        if(alet == 2){
            b++;
        }
        if(alet == 3){
            c++;
        }
        if(alet == 4){
            d++;
        }
        if(alet == 5){
            e++;
        }
        if(alet == 6){
            f++;
        }
        i++;
        //alet = 0;
    }

   cout << "AS PORCENTAGENS DE CADA FACE FORAM:\n";
   cout << "LADO 1: " <<(a*100/n) << "%%\n" << "LADO 2: " << (b*100/n) << "%%\n" << "LADO 3: " << (c*100/n) << "%%\n";
   cout << "LADO 4: " <<(d*100/n) << "%%\n" << "LADO 5: " <<(e*100/n) << "%%\n" << "LADO 6: " << (f*100/n) << "%%\n";

}


