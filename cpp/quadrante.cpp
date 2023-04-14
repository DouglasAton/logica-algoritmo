#include <iostream>

using namespace std;

int main() {

    int X, Y;

    cout << "Digite os valores das coordenadas X e Y:" << endl;
    cin >> X >> Y;

    while(X != 0 && Y != 0){
        if(X > 0 && Y > 0){
            cout << "QUADRANTE Q1" << endl;
        }
        else if(X < 0 && Y > 0){
            cout << "QUADRANTE Q2" << endl;
        }
        else if(X < 0 && Y < 0){
            cout << "QUADRANTE Q3" << endl;
        }
        else{
            cout << "QUADRANTE Q4" << endl;
        }

        cout << "Digite os valores das coordenadas X e Y:" << endl;
        cin >> X >> Y;
    }

	return 0;
}
