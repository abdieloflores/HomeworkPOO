#include <iostream>

using namespace std;

class Menu{
private:
    int opcion,salir;
public:
    Menu();
    void show();
    int getSalir();
};

Menu::Menu(){
}
void Menu::show(){
    cout<<"---- MENU ----"<<endl;
    cout<<"1.- Agregar"<<endl;
    cout<<"2.- Editar"<<endl;
    cout<<"3.- Eliminar"<<endl;
    cout<<"4.- Salir"<<endl;
    cout<<"Opcion: ";
    cin>>opcion;

        switch (opcion){
        case 1:
            system("clear");
            cout<<"Selecciono opción uno"<<endl;
            cin.ignore();
            cin.get();
            salir = 0;
            break;
        case 2:
            system("clear");
            cout<<"Selecciono opción dos"<<endl;
            cin.ignore();
            cin.get();
            salir = 0;
            break;
        case 3:
            system("clear");
            cout<<"Selecciono opción tres"<<endl;
            cin.ignore();
            cin.get();
            salir = 0;
            break;
        case 4:
            salir = 1;
            break;
        default:
            system("clear");
            cout<<"La opción no existe, intentelo de nuevo"<<endl<<endl;
            cin.get();
            salir = 0;
            break;
        }
}

int Menu::getSalir(){
    return salir;
}

int main(){

    Menu menu1;// Declaración del objeto

    do{ // Inicio ciclo do-while
        system("clear");
        menu1.show();
    }while (menu1.getSalir() == 0);//Fin ciclo do-while

return 0;
}