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
    int opcion;

    while(1){
        pedir_datos(a,b);
        //Crear objeto = Instanciar una clase, (Podemos hacer cuantos objetos queramos de una clase)
        //Creando Objeto Rectangulo
        Rectangulo figura_1(a,b);
        //Objeto mandando llamar el metodo
        figura_1.perimetro();
        figura_1.area();
    }
    //Evitar que se cierre terminal y espera cualquier tecla
    cin.ignore();
    cout<<endl<<"Presione cualquier tecla para salir"<<endl;
    cin.get();

    return 0;
}
