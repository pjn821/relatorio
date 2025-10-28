## challenge text
A hero is on his way to the castle to complete his mission. However, he's been told that the castle is surrounded with a couple of powerful dragons! each dragon takes 2 bullets to be defeated, our hero has no idea how many bullets he should carry.. Assuming he's gonna grab a specific given number of bullets and move forward to fight another specific given number of dragons, will he survive?

// me: herois querem matar dragoes 
mas nao se sabe quantos sao 
mas para cada heroi matar 1 dragrao precias de 2 balas 
//i: herois e dragoes o:true/false
//cada heroi precisa de duas balas          1 2 1 
seu eu tiver 2 herois preciso 2 de 4 balas para matar 2
                                            2 4 2
2 balas 1 dragao
erro{
2 balas 1 dragao2 balas 1 dragao
}
solutions{
    balas | 2 |dragoes | <=>
    10  /   2  =   5------true
    8   /   2  <   5------false
    20  /   2  >   5------true
    
    
    2/2=2 ----true 
    1/2=1----false
    1/2=0.5---false

entao 

 balas/2 > dragoes
   bullets/dragons > dragons


}


Return true if yes, false otherwise :)

## starting code
```c++
bool hero(int bullets, int dragons) {
}
```

## Introdução à lógica de programação
```
• Compreender o problema
• Identificar inputs e outputs
• Dividir a resolução em partes (blocos)
• Desenvolver cada um dos blocos (criar o algoritmo)
• Testar a solução
• Identificar os pontos críticos e situações de limite ou fronteira
• Escolher os dados para os testes
• Executar o algoritmo com esses dados
• Verificar se o resultado é o esperado
```


frases/perguntas me confundem 
na hora de fazer as coisas minha mente da branco.
