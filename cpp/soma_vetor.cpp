#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N;
    double soma, media;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    double vet[N];

    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    soma = 0;
    for (int i = 0; i < N; i++) {
        soma = soma + vet[i];
    }

    media = soma / N;

    cout << fixed << setprecision(1);
    cout << "VALORES = ";

    for (int i = 0; i < N; i++) {
        if (i != 0) {
            cout << " ";
        }
        cout << vet[i];
    }

    cout << fixed << setprecision(2);
    cout << endl << "SOMA = " << soma << endl;
    cout << "MEDIA = " << media << endl;

    return 0;
}
