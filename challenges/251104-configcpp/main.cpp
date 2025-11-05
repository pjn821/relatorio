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
    string mensagem = "Bom dia, "+ nome +".";
    return mensagem;
    // return mensagem
}

string operar(string operacao){
    string mensagem2 = "Calculo de " +operacao;
    return mensagem2;
}

int somar(int a, int b){
    return a + b;
}
//🟥 nao pode concatenar string com integer
// int somarB(int a, int b){
//     int resultado = a + b;
//     string mensagem = a + " + " + b + " = " + resultado
//     return resultado;
// }


int subtrair(int a, int b){
return a - b;
}

int multiplicar(int a, int b){
    // criar variavel
return a * b;
    // return variavel
}

float dividir(int a, int b){
return a / b;
}



int somarC(int a, int b){
    int resultado = a + b;
    // cout << a << " + " << b << " = " << resultado << endl;
    return resultado;
}

//saidas/output
int main(){

 cout<< operar("soma")<< endl;
//  cout<< somarC(2,3)<< endl << endl;
 cout << 2 << " + " << 3 << " = " << somarC(2,3) << endl; 


//  cout<< saudar("Alice")<< endl << endl;
//  cout<< operar("soma")<< endl;
//  cout<< somar(a + "+" + b + "= " + resultado);
//  cout<< somar(2,3)<< endl << endl;
//  cout<< operar("subtração")<< endl; 
//  cout<< subtrair(3,7)<< endl << endl;
//  cout<< operar("multiplicação")<< endl;
//  cout<< multiplicar(7,8)<< endl <<endl;
//  cout<< operar("divisão")<< endl;
//  cout<< dividir(8,4)<< endl << endl;
    
}