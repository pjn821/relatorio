#include <iostream>
using namespace std;

int somar(int numeros[]) {
    int soma = 0;
    int i = 0;
    
    while (numeros[i] != -1) { // -1 é o marcador de fim
        soma += numeros[i];
        i++;
    }
    
    return soma;
}

int main() {
    int numeros[] = {2, 8, 3, 10, 7, -1}; 
    cout << "Soma: " << somar(numeros) << endl;
}
