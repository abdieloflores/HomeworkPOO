#include <iostream>
#include <stdlib.h>

using namespace std;


//Clase Padre
class Person{
    private:
        string name;
        int age;
    public:
        Person (string, int);
        void showPerson();
};  

//Clase Hija que hereda
class Student : public Person{
    private:
        string code;
        int finalNote;
    public:
        Student(string,int,string,int);
        void showStudent();
};

Person::Person(string _name, int _age){
    name = _name;
    age = _age;
}
void Person::showPerson(){
    cout<<"Nombre: "<<name<<endl;
    cout<<"Edad: "<<age<<endl;
}

Student::Student(string _name, int _age, string _code, int _finalNote): Person (_name,_age) {

}

int main (){



    cin.ignore();
    cout<<"Presione cualquier tecla para continuar...";<<endl;
    cin.get();
    return 0;
}