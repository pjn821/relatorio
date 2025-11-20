#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    // #include <iostream>;
// #include <cctype> // Biblioteca para funções de caracteres, como isalnum()
// using namespace std;
// 
    // string texto = "The C++ at home"; 🟩
    // string texto = "The C ++ at home";
    string texto = "The C++ at home";
    // The-C-
    //       plus
    // The-C-plus-plus-at-home
    
    string result = "";
    for (int i = 0; i < texto.length(); i++) {
        if (isalnum(texto[i])) { 
            result += texto[i];
        }
        else if(texto[i] == '&'){
             result += "&";
        }

        // current char is '+'
        else if(texto[i] == '+'){
            // C++
            // C-plus-plus
            // C '+'+
            // C-
            // quando o char anterior e` ' ' adicionar so `plus`
            if (texto[i-1] == ' ') {
                result += "plus";
            } else {
                result += "-plus";
            }
            if (isalnum(texto[i+1])) {
                result += "-";
            }
            // result += "-plus";
        }



         else {
            result += '-';
        }
    }

    cout << result << endl;
    // current index = ir
    // next_index = i + 1
    // current_character = sentence[i]
    // next_character = sentence[i] + 1 🟥
    // next_character = sentence[i + 1]
}