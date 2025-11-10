// pedir 2 valores 
// dizer qual é o maior

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Digite o primeiro valor: ";
    cin >> a;

    cout << "Digite o segundo valor: ";
    cin >> b;

    if (a > b) {
        cout << "O maior valor é: " << a << endl;
    } else if (b > a) {
        cout << "O maior valor é: " << b << endl;
    } else {
        cout << "Os dois valores são iguais." << endl;
    }
}
