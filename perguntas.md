## 251011

-[ ]what's the command to run a c++ program

Ctrl+Alt+N or

g++ <code-file.cpp> -o <name-of-the-output>

- [ ] what's `#include <iostream>` for?

  para chamar biblioteca

- [ ] how to select code and comment on vscode

ctrl + k + c // comenta

ctrl + k + u // descomenta

- [ ] how declare list of `char` in c++

char name[20]; or #include <string>; std::string name;

- [ ] the computer doesn't understand `text`, what format does it understand?

0 and 1.

  - [ ] what do we call the process to convert text to the format the computer understands?

  terminal é o tradutor que traduz lingua humana para binaria e vice versa.

  - [ ] why does c++ code need to be converted?

  because c++ foi feita for human and no for pc

- [ ] Do all languages need to be converted to another format?

  

- [ ] what does `<iostream>` mean

input/output stream

Ela permite usar:

std::cout  // permite escrever no terminal

std::cin   // permite ler no terminal

- [ ] como resolver problema na acentuaçao
#include <windows>
int main(){
SetConsoleOutputCP(65001);
} 
