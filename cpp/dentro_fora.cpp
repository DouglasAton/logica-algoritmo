#include <iostream>

using namespace std;

int main() {

    int N, X, fora, dentro;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    fora = 0;
    dentro = 0; //intervalo [10,20]
    for(int i = 0; i < N; i++){
        cout << "Digite um numero: ";
        cin >> X;

        if(X < 10 || X > 20){
            fora++;
        }
        else{
            dentro++;
        }
    }

    cout << dentro << " DENTRO" << endl;
    cout << fora << " FORA" << endl;

    return 0;
}
