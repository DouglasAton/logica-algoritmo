#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N;
    double valor1, valor2, valor3, media;

    cout << "Quantos casos voce vai digitar? ";
    cin >> N;

    cout << fixed << setprecision(1);

    for(int i = 0; i < N; i++){
        cout << "Digite tres numeros:" << endl;
        cin >> valor1 >> valor2 >> valor3;

        media = (valor1 * 2.0 + valor2 * 3.0 + valor3 * 5.0) / 10.0;

        cout << "MEDIA = " << media << endl;
    }
	return 0;
}
