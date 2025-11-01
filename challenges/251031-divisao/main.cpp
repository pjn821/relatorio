#include <iostream>
#include <windows.h> // characters com simbolos

// using namespace std; // to avoid having to write std:: before standard library functions

float dividir(float a, float b) {
    float divide = a / b;
    // se b == 0 return 0 ou mensagem a dizer que nao pode dividir por 0
    return divide;
}


int soma(int a, int b, int c){
    int total = a + b;
    return total;
}

int somaB(int a, int b, int c){
    return a + b;
}


// como vai dar valor pra divisao
int main() {
    // divide(10,2)
    std::cout << dividir(1,3) << std::endl;
    std::cout << dividir(10,2) << std::endl;
    std::cout << dividir(24,8) << std::endl;
    std::cout << dividir(10,0) << std::endl;
    std::cout << soma(10,3,3) << std::endl;
    

}

