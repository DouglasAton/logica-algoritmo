#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    char escala;
    double C, F;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;

    cout << fixed << setprecision(2);

    if (escala == 'F') {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> F;

        C = 5.0 / 9.0 * (F - 32.0);
        cout << "Temperatura equivalente em Celsius: " << C << endl;
    }
    else {
        cout << "Digite a temperatura em Celsius: ";
        cin >> C;

        F = C * 9.0 / 5.0 + 32.0;
        cout << "Temperatura equivalente em Fahrenheit: " << F << endl;
    }

	return 0;
}
