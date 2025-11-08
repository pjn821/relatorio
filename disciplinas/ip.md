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


