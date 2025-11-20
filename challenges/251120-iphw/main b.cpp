// 2- Peça ao utilizador o valor do raio de um círculo (com decimais)
//         Diga qual a área e qual o perímetro.
//         - Pi= 3,1416
//         - A=Pi*r^2;
//         - P=2*Pi*r;


#include <iostream>
using namespace std;

int main(){
    float r, Area, Perimetro, Pi=3.1416;

    cin>>r;

    Area = Pi * (r*r);
    Perimetro= 2*Pi*r;

    cout<< Area<<endl;
    cout<< Perimetro<<endl;
}