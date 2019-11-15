#include <iostream>
#include <stdlib.h>
using namespace std;
#include "Exercise7.h"

Person::Person(string _name,int _age){
    name = _name;
    age = _age;
}

void Person::show(){
    cout<<"Nombre: "<<name<<endl;
    cout<<"Edad: "<<age<<endl;
}

Student::Student(string a, int b, float c):Person(a,b){
    finalNote = c;
}

void Student::show(){
    Person::show();
    cout<<"Nota Final: "<<finalNote<<endl;
}

Teacher::Teacher(string _name, int _age, string _subject):Person(_name, _age){
    subject = _subject;
}

void Teacher::show(){
    Person::show();
    cout<<"Materia: "<<subject<<endl;
}

int main(){

    Person *objects[3];

    objects[0] = new Person ("Abdiel",23);
    objects[1] = new Student ("Alejandro",19,6.4);
    objects[2] = new Teacher ("Armando",35,"POO");

    cout<<"Persona"<<endl;
    objects[0]->show();
    cout<<"\n\nEstudiante"<<endl;
    objects[1]->show();
    cout<<"\n\nMaestro"<<endl;
    objects[2]->show();


    return 0;
}
