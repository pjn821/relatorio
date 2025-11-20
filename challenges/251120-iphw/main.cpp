// Exercícios para utilização do if()
//         Peça 2 valores ao utilizador (podem ser positivos ou negativos)
//         Se a soma for positiva, escreva no ecrã "Soma positiva"
//         Se a soma for negativa, escreva no ecrã "Soma negativa"
//         Se a soma for zero, escreva no ecrã "Soma nula"

#include <iostream>
using namespace std;

int main() {
    int a, b, r;

    cin>>a;
    cin>>b;
    
    r= a + b;

    if(r>0){
        cout<<"soma positiva"<< endl;
    }else if(r==0){
        cout<<"soma nula"<< endl;
    }else{
        cout<<"soma negativa"<< endl;
    }
}