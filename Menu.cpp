#include <iostream>

using namespace std;

class Menu{
private:

public:
    Menu();
    void show(int &);
};

Menu::Menu(){
}
void Menu::show(int &_opcion){
    cout<<"---- MENU ----"<<endl;
    cout<<"1.- Agregar"<<endl;
    cout<<"2.- Editar"<<endl;
    cout<<"3.- Eliminar"<<endl;
    cout<<"4.- Salir"<<endl;
    cout<<"Opcion: ";
    cin>>_opcion;
}

int main(){
    int opcion;

    Menu menu1;
    while (1)
    {
        system("clear");
        menu1.show(opcion);

        switch (opcion)
        {
        case 1:
            system("clear");
            cout<<"Selecciono opción uno"<<endl;
            cin.ignore();
            cin.get();
            break;
        case 2:
            system("clear");
            cout<<"Selecciono opción dos"<<endl;
            cin.ignore();
            cin.get();
            break;
        case 3:
            system("clear");
            cout<<"Selecciono opción tres"<<endl;
            cin.ignore();
            cin.get();
            break;
        case 4:
            return 0;
        default:
            system("clear");
            cout<<"La opción no existe, intentelo de nuevo"<<endl<<endl;
            cin.get();
            break;
        }
    }

    cin.ignore();
    cout<<"Presione cualquier tecla para terminar"<<endl;
    cin.get();
    return 0;
}