#include <iostream>
#include <windows.h>

bool hero(int bullets, int dragons) {
  if (bullets >= 2 * dragons)
  {
    return true;
  } else {
    return false;
  }
}

int main() {
  std::cout << hero(10, 5) << std::endl;
//   true
  std::cout << hero(2, 4) << std::endl;
//   false
  std::cout << hero(20, 20 ) << std::endl;
//   false  
}

// como passo valor para funcao
// como envio valor pra quem chama




// bool hero(int bullets, int dragons) {
//   bullets >= 2 * dragons
// }

// int main() {
  
    
   
// }


// int main() {
//   bool hero(int bullets, int dragons) {
//     // bullets >= 2 * dragons
//     // 4 >= 2 * 2
//     // 6 >= 2 * 2
//     // logic
//     // bullets >= 2 * dragons;
//     return true;
//   }

//  // hero(3,2);
//   //hero(7832,323);
//   //hero(32,43);
// };






// int main() {
//   // • Identificar inputs e outputs
//   // bool e` output
//   // int bullets e` input
//   // int dragons e` input
// //   bool hero(int bullets, int dragons){
//   bool pajo(int morangos, int colegas){
//     // morangos >= 2 * colegas
//     // 4 >= 2 * 2
//     // 6 >= 2 * 2
    
//   }
// };






// • Escolher os dados para os testes
// x morangos
// y colegas
// quermos dar 2 morango a cada colega

// Algoritmo
// se o numero de morangos for o dobro de colegas entao da para dar 2 morangos para cada colega
// • Executar o algoritmo com esses dados
// 3 morangos
// 8 colegas
// consegues dar morangos a todos o colegas?
// R:false
// Expressao
// 3 / 8 

// morangos | colegas | resposta
// 4        | 1       | true
// 4        | 2       | true
// 4        | 3       | false
// 6        | 3       | true
// 6 > 2 x 3?

// morangos >= 2 * colegas












// morangos > 2 * colegas

// 2 morangos -  3 colegas
// 6 morangos -  3 colegas
// 2 * morangos > colegas

// doubro de numero de colegas  
// doubro de y
// 2x - matematica
// 2 * x




// x / 2 == true
// 2 == true
// se der numero par e` true

// x / 2 == 
// numero par
// 2
// 2 + 3
// 34 / 2
// 9 > 3
// morango






// 8 / 3, dei morango a todos e restaram 2 
// resto tem que dar zero, se o resto nao der zero
// pode ser falso

// 879 morangos
// 32 colegas
// consegues dar morangos a todos o colegas?
// R:true


// 329 morangos
// 33 colegas
// consegues dar morangos a todos o colegas?
// R:

// • Verificar se o resultado é o esperado
// ```