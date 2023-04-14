#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N, soma, contPares;
    double mediaPares;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> N;

    int vet[N];

    for(int i = 0; i < N; i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    soma = 0;
    contPares = 0;
    for(int i = 0; i < N; i++){
        if(vet[i] % 2 == 0){
            soma = soma + vet[i];
            contPares++;
        }
    }

    if (contPares == 0) {
        cout << "NENHUM NUMERO PAR" << endl;
    }
    else {
        mediaPares = (double)soma / contPares;

        cout << fixed << setprecision(1);
        cout << "MEDIA DOS PARES = " << mediaPares << endl;
    }
    return 0;
}
