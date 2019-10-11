#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;


//Todos los datos privados se llaman encapsulamiento.

class Person{
    //Atributos
    private:    
        int age;
        string name;
    //Metodos
    public:
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
    cout<<"Hola soy "<<name<<" tengo "<<age<<" años y estoy leyendo un libro."<<endl;
}
void Person::eat(){
    cout<<"Mi nombre es "<<name<<" y me gusta comer sushi"<<endl;
}
void Person::run(){
    cout<<"Mis amigos me dicen "<<name<<" y corro un maratón de 10km"<<endl;
}

int main (){
    
    Person a(23,"Abdiel");
    a.read();
    a.eat();
    a.run();

cin.ignore();
cout<<"\n\nPresiones cualquier tecla para continuar..."<<endl;
cin.get();
return 0;
}