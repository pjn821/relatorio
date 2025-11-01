// temos web app e queremos 
// enviar email para novos clientes
// a dizer ola


// Ola, Alice. Obrigado por subscrever.
// Ola, Bob. Obrigado por subscrever.

#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

string agradecer(string nome){
    string mensagem = "Ola, " + nome + ". Obrigado por subscrever.";

    return mensagem;
}

int main(){
    cout << agradecer("Alice") << endl;
    cout << agradecer("Bob") << endl;
    cout << agradecer("Carla") << endl;
    cout << agradecer("David") << endl;
}

