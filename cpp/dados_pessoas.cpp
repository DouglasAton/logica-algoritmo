#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N, qtdHomens, qtdMulheres;
    double menorAltura, maiorAltura, alturaFemMedia, alturaFemTotal = 0;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    double alturas[N];
    char generos[N];

    for(int i = 0; i < N; i++){
        cout << "Altura da " << i + 1 << "a pessoa: ";
        cin >> alturas[i];
        cout << "Genero da " << i + 1 << "a pessoa: ";
        cin >> generos[i];
    }

    menorAltura = alturas[0];
    maiorAltura = alturas[0];

    for(int i = 1; i < N; i++){
        if(alturas[i] > maiorAltura){
            maiorAltura = alturas[i];
        }
        if(alturas[i] < menorAltura){
            menorAltura = alturas[i];
        }
    }

    qtdHomens = 0;
    qtdMulheres = 0;
    for(int i = 0; i < N; i++){
        if(generos[i]=='M'){
            qtdHomens++;
        }
        else{
            qtdMulheres++;
            alturaFemTotal = alturaFemTotal + alturas[i];
        }
    }

    alturaFemMedia = alturaFemTotal / qtdMulheres;

    cout << fixed << setprecision(2);
    cout << "Menor altura = " << menorAltura << endl;
    cout << "Maior altura = " << maiorAltura << endl;
    cout << "Media das alturas das mulheres = " << alturaFemMedia << endl;
    cout << "Numero de homens = " << qtdHomens << endl;

    return 0;
}
