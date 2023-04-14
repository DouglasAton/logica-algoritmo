#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

    double A, B, C, quadrado, triangulo, trapezio;

    cout << "Digite a medida A: ";
    cin >> A;

    cout << "Digite a medida B: ";
    cin >> B;

    cout << "Digite a medida C: ";
    cin >> C;

    quadrado = pow(A, 2.0);

    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO = " << quadrado << endl;

    triangulo = (A * B) / 2;

    cout << "AREA DO TRIANGULO = " << triangulo << endl;

    trapezio = ((A + B) * C) / 2;

    cout << "AREA DO TRAPEZIO = " << trapezio << endl;

	return 0;
}
