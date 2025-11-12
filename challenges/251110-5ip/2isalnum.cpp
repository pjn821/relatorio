#include <iostream>
#include <cctype> // para isalnum()
#include <string>
using namespace std;

string verificar(char caracter){
    if (isalnum(caracter)) {
        return "true";
    } else {
        return "false";
    }
}

int main() {


    // char lista[4] = {'c', '9', '_', '&'}; 
    // int i = 0;

    // while (i<4) {
    //     cout << isalnum(lista[i]) << endl;
    //     i++;
    // }

    // string texto;
    // texto = "How to find out String length in C++";
    // string vogais;
    // vogais = "aeiou";

    // cout << texto[2] << endl;
    // cout << "alice"[2] << endl;

    // cout << texto.length() << endl;
    // cout << vogais.length() << endl;
    // // 🟥 can't call .length() on string literal directly
    // // cout << "blabla".length() << endl;
    
    string textob;
    textob = "C++";
    // cout << textob.length() << endl;

    int length_of_textob = textob.length();

    for (int i = 0; i < length_of_textob; i++) {
        // cout << i << endl;
        cout << textob[i] << "\t";
        cout << verificar(textob[i]) << endl;
    }
}

