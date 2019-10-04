#include <iostream>

using namespace std;

class Cuadrado{
    private:
        float lado;
    public:
        Cuadrado(float);
        void perimetro();
        void area();
};
Cuadrado::Cuadrado(float _lado){
    lado = _lado;
}
void Cuadrado::perimetro(){
    cout<<"El perimetro es de: "<<(lado*4)<<endl;
}
void Cuadrado::area(){
    cout<<"El area es de: "<<(lado*lado)<<endl;
}
void pedir_datos(float &a){
    cout<<"Ingrese el tamaño del lado del cuadrado: ";
    cin>>a;
}

int main(){
    float a;
    cout<<endl<<"CALCULO DE AREA Y PERIMETRO DE UN CUADRADO"<<endl<<endl;
    pedir_datos(a);
    Cuadrado cuadro(a);

    cuadro.perimetro();
    cuadro.area();

    cin.ignore();
    cout<<endl<<"Presiones cualquier tecla para continuar...";
    cin.get();
    return 0;
}