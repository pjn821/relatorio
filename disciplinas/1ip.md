instruçao de decisao

if(condiçao){
	instruçao a executar
    se a  condiçao 
    for verdadeira
}else {
	instruçao a executar
	se a condiçao
	for falsa
}


## [[251105]]
	
	nested if
```c++
    #include <iostream>
    using namespace std;
    int main(){
        int val;

        cout<< "valor = ";
        cin>> val;
        if(val==3){
            cout<< "é 3";
        
        if (val==4){
            cout<< "é 4";
        }else{
            cout<< "não é 3 nem 4";
        }
        }
    }
```


## [[251112]]
    Correçao do homework

    codigo de ordenaçao de numeros 
    com objetivo de sabermos como se pode trocar os numeros das variaveis.

    ````c++
#include <iostream>
using namespace std;

int main(){

    int n1, n2, aux;

    cout<< "n1= "; cin>>n1;
    cout<< "n2= "; cin>>n2;

    if (n1 < n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    cout<< n1<< "é menor ou igual a "<<n2;
}
    ````

- homework
    Fazer um programa que ordena 3 valores
    Fazer o fluxograma (no papel ou no Raptor)
   
    Escrever o código em C++
    Restrições:
    O nome da 1ª variável é n1
    O nome da 2ª variável é n2
    O nome da 3ª variável é n3
   
    Só pode comparar 2 variáveis em cada teste
   
    Só pode usar uma variável adicional
   
    O output é único (no fim do programa) e mostra n1, n2 e n3 por ordem crescente
   
    O programa deve terminar, obrigatoriamente, com a instrução:
    cout << "Valores ordenados\n"
            << "n1=" << n1
            << "\nn2=" << n2
            << "\nn3=" << n3;


## [[251119.md]]
nova palavra "swop" -> trocar apenas duas coisas.
```c++
if (n1 > n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    or 

if( n1 > n2){
    swop(n1, n2);
}
````
formas somar 

```c++
int x = 2
x = x + 1; cout << "x = 3 "; //serve para somar 2 ou mais coisas
x += 1;    cout << "x = 3 "; // serve para somar uma coisa 
x++;       cout << "x = 2 "; //primeiro da o valor de x depois soma +1
++x;       cout << "x = 3 "; // soma +1 depois da o valor de x
```





