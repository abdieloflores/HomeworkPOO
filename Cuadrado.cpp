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
    cout<<"El perimetro es de: "<<(lado*4)
}

int main(){

    cin.ignore();
    cout<<"Presiones cualquier tecla para continuar...";
    cin.get();
    return 0;
}