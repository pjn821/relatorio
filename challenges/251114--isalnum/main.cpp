#include <iostream>
#include <cctype>
using namespace std;


string trocar(string texto) {
    string result = ""; // guardar texto[i]

    for (int i = 0; i < texto.length(); i++) {

        if (isalnum(texto[i])) { 
            // se for letra ou número
           result += texto[i];
        } else {
            // se NÃO for letra nem número
           result += '-';
        }
    }

    return result;
}
// string trocar(string texto) {
//     //string result = ""; // guardar texto[i]

//     for (int i = 0; i < texto.length(); i++) {

//         if (isalnum(texto[i])) { 
//             // se for letra ou número
//          //   result += texto[i];
//         } else {
//             // se NÃO for letra nem número
//            // result += '-';
//         }
//     }

//     return texto;
// }

int main() {

    string s[3]= {"Git & Version Control", "Customer Behavior & JavaScript", "No error message in the DOM"};
    int i = 0;
    
    while (i<3)
    {
        cout << trocar(s[i]) << endl;
        i++;
    }
    
    
    // cout << trocar("Git & Version Control") << endl;
    // cout << trocar("Customer Behavior & JavaScript") << endl;
    // cout << trocar("No error message in the DOM") << endl;

}
