#include <iostream>

using namespace std;

int main() {

    int X;

    cout << "Digite o valor de X: ";
    cin >> X;

    for(int i = 1; i <= X; i++){
        if(i % 2 != 0){
            cout << i << endl;
        }
    }

    return 0;
}
