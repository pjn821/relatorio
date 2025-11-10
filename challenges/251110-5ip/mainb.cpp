// pedir 3 valores dizer 
// qual é o maior (ou maiores)

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Digite o primeiro valor: ";
    cin >> a;

    cout << "Digite o segundo valor: ";
    cin >> b;

    cout << "Digite o terceiro valor: ";
    cin >> c;

    // Primeiro encontramos o maior valor
    int maior = a;

    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    // Agora mostramos os maiores
    cout << "Maior(es) valor(es): ";

    if (a == maior) cout << a << " ";
    if (b == maior && b != a) cout << b << " ";
    if (c == maior && c != a && c != b) cout << c << " ";
}
