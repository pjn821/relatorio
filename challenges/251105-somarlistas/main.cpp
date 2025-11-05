#include <iostream>
using namespace std;

// função para  soma todos os elementos do array
int somar(int numeros[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i]; // somar cada numero
    }
    return soma;
}

int main() {
    int numbers_list[] = {2, 8, 3, 10, 7}; // input
    //int tamanho = 5; // limite para parar somar

    int resultado = somar(numbers_list, 5); // chama a função

    cout << "Output: " << resultado << endl; 
    
}
