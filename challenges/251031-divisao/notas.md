# funcao

## definir funcao

```c++
tipo_de_output nome_de_funcao(tipo_de_input nome_de_variavel_de_input) {
    return logica;
}

// funcao para dividir dois numeros
// valor de saida -> float
// nome da funcao -> dividir
// valores de entrada -> flaot a, float b

float dividir(float a, float b) {
    float divide = a / b;
    return divide;
}
```



## chamar funcao


Float pode ser numero com virgula ou numero sem virgula
string altura = 1.80;
float alturaB = 1;

## instalar gbd



// // tentar float para ver se da alguma coisa
// int dividir(float a,float b) {
//     float dividi= a / b;
//     return dividi;
// }

// 🟥 
// tentar float para ver se da alguma coisa
// int dividir(float a,float b) {
//     a / b;
// }
// > 1

// // nomear funcao com verbo
// // 🟥 int divisao() {
// int dividir(int a,int b) {
//     a / b;
// }
// > 1



## erro debug
Starting build...
cmd /c chcp 65001>nul && C:\MinGW\bin\gcc.exe -fdiagnostics-color=always -g "C:\Users\Paulo\Desktop\Projetos\obsidian\secon braind\relatorio\challenges\251031-divisao\main.cpp" -o "C:\Users\Paulo\Desktop\Projetos\obsidian\secon braind\relatorio\challenges\251031-divisao\main.exe"
C:\Users\Paulo\AppData\Local\Temp\ccCx1vfQ.o: In function `main':
C:/Users/Paulo/Desktop/Projetos/obsidian/secon braind/relatorio/challenges/251031-divisao/main.cpp:14: undefined reference to `std::cout'
C:/Users/Paulo/Desktop/Projetos/obsidian/secon braind/relatorio/challenges/251031-divisao/main.cpp:14: undefined reference to `std::ostream::operator<<(float)'
C:/Users/Paulo/Desktop/Projetos/obsidian/secon braind/relatorio/challenges/251031-divisao/main.cpp:14: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&)'
C:/Users/Paulo/Desktop/Projetos/obsidian/secon braind/relatorio/challenges/251031-divisao/main.cpp:14: undefined reference to `std::ostream::operator<<(std::ostream& (*)(std::ostream&))'
C:/Users/Paulo/Desktop/Projetos/obsidian/secon braind/relatorio/challenges/251031-divisao/main.cpp:15: undefined reference to `std::cout'
C:/Users/Paulo/Desktop/Projetos/obsidian/secon braind/relatorio/challenges/251031-divisao/main.cpp:15: undefined reference to `std::ostream::operator<<(float)'
C:/Users/Paulo/Desktop/Projetos/obsidian/secon braind/relatorio/challenges/251031-divisao/main.cpp:15: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&)'
C:/Users/Paulo/Desktop/Projetos/obsidian/secon braind/relatorio/challenges/251031-divisao/main.cpp:15: undefined reference to `std::ostream::operator<<(std::ostream& (*)(std::ostream&))'
C:/Users/Paulo/Desktop/Projetos/obsidian/secon braind/relatorio/challenges/251031-divisao/main.cpp:16: undefined reference to `std::cout'
C:/Users/Paulo/Desktop/Projetos/obsidian/secon braind/relatorio/challenges/251031-divisao/main.cpp:16: undefined reference to `std::ostream::operator<<(float)'
C:/Users/Paulo/Desktop/Projetos/obsidian/secon braind/relatorio/challenges/251031-divisao/main.cpp:16: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&)'
C:/Users/Paulo/Desktop/Projetos/obsidian/secon braind/relatorio/challenges/251031-divisao/main.cpp:16: undefined reference to `std::ostream::operator<<(std::ostream& (*)(std::ostream&))'
C:\Users\Paulo\AppData\Local\Temp\ccCx1vfQ.o: In function `_tcf_0':
c:/mingw/lib/gcc/mingw32/6.3.0/include/c++/iostream:74: undefined reference to `std::ios_base::Init::~Init()'
C:\Users\Paulo\AppData\Local\Temp\ccCx1vfQ.o: In function `_static_initialization_and_destruction_0':
c:/mingw/lib/gcc/mingw32/6.3.0/include/c++/iostream:74: undefined reference to `std::ios_base::Init::Init()'
collect2.exe: error: ld returned 1 exit status

Build finished with error(s).

 *  The terminal process terminated with exit code: -1. 
 *  Terminal will be reused by tasks, press any key to close it. 
