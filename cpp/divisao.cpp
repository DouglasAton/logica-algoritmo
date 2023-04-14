#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int numeroCasos, numerador, denominador;
    double divisao;

    cout << "Quantos casos voce vai digitar? ";
    cin >> numeroCasos;

    cout << fixed << setprecision(2);

    for(int i = 0; i < numeroCasos; i++){
        cout << "Entre com o numerador: ";
        cin >> numerador;
        cout << "Entre com o denominador: ";
        cin >> denominador;

        if(denominador == 0){
            cout << "DIVISAO IMPOSSIVEL" << endl;
        }
        else{
            divisao = (double) numerador / denominador;
            cout << "DIVISAO = " << divisao << endl;
        }
    }

	return 0;
}
