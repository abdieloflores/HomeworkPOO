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

//Clase hija que hereda
class Student : public Person{
    private:
        string code;
        float finalNote;
    public:
        Student(string,int,string,float);
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

Student::Student(string _name, int _age, string _code, float _finalNote): Person(_name,_age){
    code = _code;
    finalNote = _finalNote;
}

void Student::showStudent(){
    showPerson();
    cout<<"Code: "<<code<<endl;
    cout<<"Final Note: "<<finalNote<<endl;
}

int main (){

    Student student1("Abdiel",24,"SOF8376434",92.6);

    student1.showStudent();

    cin.ignore();
    cin.get();
    return 0;
}

