#include <iostream>

using namespace std;

class Menu{
private:
    int opcion;
public:
    Menu(int);
    void show();
};

Menu::Menu(int _opcion){
    opcion = _opcion;
}
void Menu::show(){
    cout<<"---- MENU ----"<<endl;
    cout<<"1.- Agregar"<<endl;
    cout<<"2.- Editar"<<endl;
    cout<<"3.- Eliminar"<<endl;
    cout<<"Opcion: "<<endl;
}

int main(){
    int opcion;

    Menu menu1(opcion);
    menu1.show();

    switch (opcion)
    {
    case 1:
        cout<<"Uno";
        break;
    case 2:
        cout<<"Uno";
        break;
    case 3:
        cout<<"Uno";
        break;
    default:
        break;
    }


    cin.ignore();
    cout<<"Presione cualquier tecla para terminar"<<endl;
    cin.get();
    return 0;
}