#include <iostream>

using namespace std;

int main() {

    int X, Y, soma, troca;

    cout << "Digite dois numeros:" << endl;
    cin >> X >> Y;

    if (X > Y) {
        troca = X;
        X = Y;
        Y = troca;
    }

    soma = 0;
    for (int i = X+1; i < Y; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    cout << "SOMA DOS IMPARES = " << soma << endl;

    return 0;
}