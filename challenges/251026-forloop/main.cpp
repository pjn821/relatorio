#include <iostream>

int main() 
{
  float media = 0;
  int soma = 0;
  int numerodealunos = 5;
  int nota;
  
  for (int i = 0; i < numerodealunos; i++)
  {
    std::cout << "Qual e` a nota? ";
    std::cin >> nota;
    
    // soma = soma + nota;
    soma += nota;
  }
    media = soma / numerodealunos;
    std::cout << "Media final: " << media << std::endl;
    return 0;
}