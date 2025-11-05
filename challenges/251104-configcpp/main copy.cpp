//- somar(2,3) -> 5,
//- dividir(8,4) -> 2,
//- subtrair(3,7) -> -4,
//- multiplicar(7,8), 56,
//- criar_saudação('Alice') -> "Bom dia, Alice.",
//- operar("soma") -> "operacao soma"

// my.... 
    //dividir por partes
    //tratar de acordo a ordem
        //definir
        //declarar
        //inserir


#include <iostream>
#include <windows.h>
#include <string>

using namespace std;



//string saudar(string nome){
//   return nome;
//}

//string operar(string operaçao){
//   return operaçao;
//}

//entradas/input
string saudar(string nome){
    nome = "Bom dia, "+ nome +".";
    return nome;
}

string operar(string operacao){
    operacao = "Calculo de " +operacao;
    return operacao;
}

int somar(int a, int b){
return a + b;
}

int subtrair(int a, int b){
return a - b;
}

int multiplicar(int a, int b){
return a * b;
}

float dividir(int a, int b){
return a / b;
}

//saidas/output
int main(){
 cout<< saudar("Alice")<< endl << endl;
 cout<< operar("soma")<< endl;
 cout<< somar(2,3)<< endl << endl;
 cout<< operar("subtração")<< endl; 
 cout<< subtrair(3,7)<< endl << endl;
 cout<< operar("multiplicação")<< endl;
 cout<< multiplicar(7,8)<< endl <<endl;
 cout<< operar("divisão")<< endl;
 cout<< dividir(8,4)<< endl << endl;
    
    
}