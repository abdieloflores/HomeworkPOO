#include <iostream>
#include <string>
#include <string.h>

using namespace std;


class Agenda{
    private:
        string nombre, direccion, notas;
        long telefono;
        int opcion;

    public:
        Agenda();
        //Getters and Setters
        void setNombre(string);
        void setDireccion(string);
        void setNotas(string);
        void setTelefono(long);
        string getNombre();
        string getDireccion();
        string getNotas();
        long getTelefono();
        //End Getters and Setters
};

Agenda::Agenda(){
}
void Agenda::setNombre(string _nombre){
    nombre = _nombre;
}
void Agenda::setDireccion(string _direccion){
    direccion = _direccion;
}
void Agenda::setNotas(string _notas){
    notas = _notas;
}
void Agenda::setTelefono(long _telefono){
    telefono = _telefono;
}
string Agenda::getNombre(){
    return nombre;
}
string Agenda::getDireccion(){
    return direccion;
}
string Agenda::getNotas(){
    return notas;
}
long Agenda::getTelefono(){
    return telefono;
}




int main(){
    int opcion,num;
    bool a=false;
    long telefono;
    string nombre, direccion, notas;

    system("clear");
    cout<<"Agenda Electrónica"<<endl<<endl;
    cout<<"¿Cuantos contactos desea ingresar?: ";
    cin>>num;
    Agenda contactos[num];
       
        do{
            system("clear");
            cout<<"Agenda Electrónica"<<endl<<endl;
            cout<<"1.- Agregar contactos"<<endl;
            cout<<"2.- Mostrar contactos"<<endl;
            cout<<"3.- Buscar contacto"<<endl;
            cout<<"4.- Salir"<<endl;
            cout<<"Opción: ";
            cin>>opcion;

            switch (opcion)
            {
            case 1:
                for (int i = 0; i < num; i++)
                {   
                    system("clear");
                    if(i == 0)cin.ignore();
                    cout<<"Contacto "<<i+1<<endl<<endl;
                    cout<<"Nombre: ";
                    getline(cin,nombre);
                    contactos[i].setNombre(nombre);
                    cout<<"Telefono: ";
                    cin>>telefono;
                    cin.ignore();
                    contactos[i].setTelefono(telefono);
                    cout<<"Dirección: ";
                    getline(cin,direccion);
                    contactos[i].setDireccion(direccion);
                    cout<<"Comentarios: ";
                    getline(cin,notas);
                    contactos[i].setNotas(notas);

                }
                
                break;
            case 2:
                system("clear");
                for (int i = 0; i < num; i++)
                {
                    cout<<"\nContacto "<<i+1<<endl<<endl;
                    cout<<"Nombre: "<<contactos[i].getNombre()<<endl;
                    cout<<"Telefono: "<<contactos[i].getTelefono()<<endl;
                    cout<<"Direccion: "<<contactos[i].getDireccion()<<endl;
                    cout<<"Comentarios: "<<contactos[i].getNotas()<<endl;
                    cout<<"------------------------------------------------------";

                }
                cin.ignore();
                cout<<"\n\nPresione cualquier tecla para continuar..."<<endl;
                cin.get();
                break;
            case 3:
                system("clear");
                cout<<"Ingrese el telefono a buscar: ";
                cin>>telefono;
                for (int i = 0; i < num; i++)
                {
                    if (telefono == contactos[i].getTelefono())
                    {
                        system("clear");    
                        cout<<"Nombre: "<<contactos[i].getNombre()<<endl;
                        cout<<"Telefono: "<<contactos[i].getTelefono()<<endl;
                        cout<<"Direccion: "<<contactos[i].getDireccion()<<endl;
                        cout<<"Comentarios: "<<contactos[i].getNotas()<<endl;
                        a = true;
                        cin.ignore();
                        cout<<"\n\nPresione cualquier tecla para continuar..."<<endl;
                        cin.get();
                    }
                    if (a == false)
                    {
                        system("clear");
                        cout<<"Número no encontrado, intentelo de nuevo"<<endl<<endl;
                        cin.ignore();
                        cout<<"\n\nPresione cualquier tecla para continuar..."<<endl;
                        cin.get();
                    } 
                }
                
                break;
            case 4:
                return 0;
                break;
            default:
                system("clear");
                        cout<<"No existe la opción, intentelo de nuevo"<<endl<<endl;
                        cin.ignore();
                        cout<<"\n\nPresione cualquier tecla para continuar..."<<endl;
                        cin.get();
                break;
            }
            
        }while (1);

return 0;
}


