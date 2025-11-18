na string podemos identificar um indice e apartir dele decidir se quermos mudar informações nos indices anteriores ou/e posterior. 


````c++
string texto = "c++is hard but depend"
else if(texto[i] == '+'){
            
            if (texto[i-1] == ' ') {
                result += "plus";
            } else {
                result += "-plus";
            }
            if (isalnum(texto[i+1])) {
                result += "-";
            }
            //  c+
            // c-plus
            // c+ a
            // c-plus
            // output the code; c-plus-plus- hard-but-depend
        }
````