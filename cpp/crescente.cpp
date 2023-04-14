#include <iostream>

using namespace std;

int main() {

    int X, Y;

    cout << "Digite dois numeros:" << endl;
    cin >> X >> Y;

    while(X != Y){
        if(X > Y){
            cout << "DECRESCENTE!" << endl;
        }
        else{
            cout << "CRESCENTE!" << endl;
        }

        cout << "Digite outros dois numeros:" << endl;
        cin >> X >> Y;
    }

	return 0;
}
