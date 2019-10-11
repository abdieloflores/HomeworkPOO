#include <iostream>
#include <stdlib.h>

using namespace std;


//Todos los datos privados se llaman encapsulamiento.

class Person{
    //Atributos
        int age;
        string name;
    //Metodos
        Person(int, string);
        void read();
        void eat();
        void run();

};

Person::Person(int _age, string _name){
    age = _age;
    name = _name;
}

void Person::read(){
    cout<<"Hola soy"<<name<<" y estoy leyendo un libro.";
}
void Person::eat(){
    cout<<"Hola soy"<<name<<" y estoy comiendo una hamburguesa.";
}

int main (){



return 0;
}