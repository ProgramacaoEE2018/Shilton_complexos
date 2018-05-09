#include <iostream>
#include <math.h>
#include "ClassComplexo.h"
using namespace std;


int main(){
    float re1=2;
    float img1=4;
    float re2=3;
    float img2=5;

//utilizando ponteiros
    Complexo *z1=new Complexo(re1,img1);
    Complexo *z2=new Complexo(re2,img2);

    z1->modulo();
    z1->conjugado();
    z1->soma(*z2);
    z1->diferenca(*z2);
    z1->produto(*z2);
    z1->divisao(*z2);

//Outra forma de inicializar objeto e chamar atributos
    /*
    Complexo z1(2,4);
    Complexo z2(3,5);
    z1.modulo();
    z1.conjugado();
    z1.soma(z2);
    z1.diferenca(z2);
    z1.produto(z2);
    z1.divisao(z2);

    */

	return 0;
}
