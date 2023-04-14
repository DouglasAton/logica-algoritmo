#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N, posMaior;
    double maior;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    double vet[N];

    for(int i = 0; i < N; i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    maior = vet[0];
    posMaior = 0;
    for(int i = 1; i < N; i++){
        if(vet[i] > maior){
            maior = vet[i];
            posMaior = i;
        }
    }

    cout << fixed << setprecision(1) << endl;
    cout << "MAIOR VALOR = " << maior << endl;
    cout << "POSICAO DO MAIOR VALOR = " << posMaior << endl;

    return 0;
}
