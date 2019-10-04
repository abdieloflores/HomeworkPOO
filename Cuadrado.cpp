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

int main(){

    cin.ignore();
    cout<<"Presiones cualquier tecla para continuar...";
    cin.get();
    return 0;
}