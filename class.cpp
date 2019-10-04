#include <iostream>

using namespace std;

class Rectangulo{
    //Atributos
    private:
        float largo,ancho;
    //Metodos
    public:
        Rectangulo(float,float); // Constructor
        void perimetro();
        void area();
        void menu();
};

//Haciendo Constructor
Rectangulo::Rectangulo(float opc_largo, float opc_ancho){
    largo = opc_largo;
    ancho = opc_ancho;
}

//Metodos
void Rectangulo::perimetro(){
    float opc_perimetro;

    opc_perimetro = (2*largo)+(2*ancho);

    cout<<"El perimetro del Rectangulo es: "<<opc_perimetro<<endl;
}

void Rectangulo::area(){
    float opc_area;

    opc_area = largo*ancho;

    cout<<"El area del Rectangulo es: "<<opc_area<<endl;
}

void pedir_datos(float &a, float&b){
    cout<<"Ingresa el largo: "<<endl;
    cin>>a;
    cout<<"Ingresa el ancho"<<endl;
    cin>>b;
}

int main(){
    float a,b;
    cout<<endl<<"CALCULAR AREA Y PERIMETRO DE UN RECTANGULO"<<endl<<endl;

    pedir_datos(a,b);
    Rectangulo figura_1(a,b);
    figura_1.area();
    figura_1.perimetro();

    cin.ignore();
    cout<<"Presione cualquier tecla para salir...";
    cin.get();
    return 0;
}
