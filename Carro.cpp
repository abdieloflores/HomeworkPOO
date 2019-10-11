#include <iostream>
#include <stdlib.h>

using namespace std;

class Car{
    private:
        string marca;
        string color;
        int velocidad_max;
        int frenado;
        int diametro_volante;
    public:
        Car(string, string, int, int,int);
        void derrapar();
        void girar();
        void acelerar();

};

Car::Car(string a, string b, int c, int d,int e){
    marca = a;
    color = b;
    velocidad_max = c;
    frenado = d;
    diametro_volante = e;
}

void Car::derrapar(){
    cout<<"El automovil "<<marca<<" tiene una velocidad maxima de "<< velocidad_max<< "km/h, y su frenado es de "<<frenado<<", por lo tanto si gira el volante que es de un diametro de "<<diametro_volante<<" al mismo tiempo que frena va a derrapar."<<endl<<endl;

}
void Car::acelerar(){
    cout<<"El automovil "<<marca<<" tiene la capacidad de acelerar hasta "<<velocidad_max<<" Km/h"<<endl<<endl;
}
void Car::girar(){
    cout<<"Tengo un automovil "<<marca<<" y gracias a su volante de "<<diametro_volante<<"cm. puede girar 360º"<<endl<<endl;
}

int main(){
    
    Car carro1("Mustang","Amarilla",280,150,30);
    carro1.derrapar();
    carro1.acelerar();
    carro1.girar();


    cin.ignore();
    cout<<endl<<"Presiones cualquier tecla para continuar...";
    cin.get();
    return 0;
}