#ifndef CLASSCOMPLEXO_H_INCLUDED
#define CLASSCOMPLEXO_H_INCLUDED

using namespace std;

class Complexo{
private:
    float re, img;

public:
    Complexo(float a, float b);
    void forma_cart();
    void modulo();
    void conjugado();
    void soma(Complexo z);
    void diferenca(Complexo z);
    void produto(Complexo z);
    void divisao(Complexo z);
};
Complexo::Complexo(float a, float b){
    re=a;
    img=b;
}
void Complexo::forma_cart(){
    cout << "Forma Cartesiana: "<< re<<"+j("<<img<<")"<<endl;
}

void Complexo::modulo(){
    float modulo;
    modulo= sqrt(re*re+img*img);
    cout << "Modulo: "<< modulo<<endl;
}

void Complexo::conjugado(){
    cout << "Conjugado: "<< re<<"-j("<<img<<")"<<endl;
}

void Complexo::soma(Complexo z){
    float soma1,soma2;
    soma1= re+z.re;
    soma2=img+z.img;
    cout << "Soma: "<< soma1<<"+j("<<soma2<<")"<<endl;
}
 void Complexo::diferenca(Complexo z){
    float soma1,soma2;
    soma1= re - z.re;
    soma2=img - z.img;
    cout << "Diferenca: "<< soma1<<"+j("<<soma2<<")"<<endl;
 }
void Complexo::produto(Complexo z){
    float prod1,prod2;
    prod1= re*z.re - img*z.img;
    prod2=re*z.img+img*z.re;
    cout << "Produto: "<< prod1<<"+j("<<prod2<<")"<<endl;
}
void Complexo::divisao(Complexo z){
    float denominador;
    float div1,div2;
    float prod1,prod2;
    prod1= re*z.re - img*(-z.img);
    prod2=re*(-z.img)+img*(z.re);
    denominador = (z.re*z.re)+(z.img*z.img);
    div1=prod1/denominador;
    div2=prod2/denominador;
    cout << "Divisao: "<< div1<<"+j("<<div2<<")"<<endl;

}


#endif // CLASSCOMPLEXO_H_INCLUDED
