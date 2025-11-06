cirar uma variavel para guardar todos os valores

somar todos os vslores dentro do array quando acabar ele para

criar outra variavel para definir quando ele tem de parar de somar acho eu :) 

deifinir soma = 0 para quando quiser rodsr o programa novamente  para nao ficar nenhum valor guardado e der resultados errados. se nao só por preocaçao :)

declarar os valores 
criar nova variavel para lista dos numeros 
criar ou nao uma variavel para definir o quando parar de somar

fazer o output


--nao posso definir os valores dentro da função acho eu :)

int somar(int numeros[] = {2, 8, 3, 10, 7}, int tamanho = 5) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i]; // somar cada numero
    }
    return soma;
}



existe forma de fazer sem a variavel tamnho dentro da funçao? :(  :(
    yes, exist. :) 

estrurura de repetiçao para uma condiçao simpes: while :) happy happy



## function signature
```c++
functionNameA(a,b);
functionNameB(a,b,c);

// 
int a[] = {1,2,3};
int b = 3;
// int somar(a,b){
int somar(lista,tamanho_de_lista){
    for (int i = 0,i < tamanho_de_lista; i++){
        soma += lista[i]
    }
    return soma
}
somar(a,b) // 6

```


## arrays
### dados
- string
- float
- int
- boolean

### Estrutura de dados
#### initializacao
```c++
int idades[1]; // array estatica com um item

string nomes[4] = {"alice", "bob", "carla", "david"};




nome_de_dados_na_array nome_de_variavel[];
nome_de_dados_na_array nome_de_variavel[] = {'alice', 'bob'};

#### indices/index
posicao na array
nome[0] -> alice
```


vgvyu[2]
cout carla
vyugy7g[1 2 3 4 5 ]
        0 1 2 3 4 
## questions
- como calcular soma de numeros numa lista?
    - `soma(list, tamanho_de_lista)`
Sera possivel criar uma funcao que so aceita a lista
como argumento e nao precisamos de passar o tamanho_da_lista?
`soma(lista)`

```c++
int lista_de_numeros[] = {2,3,4};
cout << somarB(lista_de_numeros) << endl;// 9
```
???dar valor a uma variavel
