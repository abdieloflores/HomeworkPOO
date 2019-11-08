#include <iostream>
#include <stdlib.h>

using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        Person(string, int);
        string getName(){return name;}
        int getAge(){return age;}
        void talkPerson();
        void showPerson();
};

class Employee : public Person{
    private:
        string position;
        float salary;
    public:
        Employee(string, int, string, float);
        void showEmployee();
        void moreSalary();
};

class Student : public Person{
    private:
        string code;
        float  note1;
        float note2;
        float note3;
    public:
        Student(string,int,string,float,float,float);
        void average();
        void showStudent();
};

class UniversityStudent : public Student{
    private:
        string university;
        string career;
        string specialty;
    public:
        UniversityStudent(string,int,string,float,float,float,string,string,string);
        void showUniversityStudent();
        void buyBooks();

};

Person::Person(string _name, int _age){
    name = _name;
    age = _age;
}

void Person::showPerson(){
    cout<<"Nombre: "<<name<<endl;
    cout<<"Edad: "<<age<<endl;
}
void Person::talkPerson(){
    cout<<name<<" esta hablando con su vecino y tiene "<<age<<" años de edad"<<endl;
}


Employee::Employee(string _name, int _age, string _position, float _salary): Person(_name , _age){
    position = _position;
    salary = _salary;
}

void Employee::showEmployee(){
    showPerson();
    cout<<"Cargo: "<<position<<endl;
    cout<<"Sueldo: $"<<salary<<endl;
}
void Employee::moreSalary(){
    cout<<getName()<<" necesita un aumento de sueldo del 10%, el actualmente gana $"<<salary<<" por lo tanto despues del aumento ganará $"<<salary*1.1<<endl;
}

Student::Student(string _name,int _age,string _code,float _note1,float _note2,float _note3): Person(_name,_age){
    code = _code;
    note1 = _note1;
    note2 = _note2;
    note3 = _note3;
}

void Student::showStudent(){
    cout<<"Codigo: "<<code<<endl;
    showPerson();
    cout<<"Nota Final: "<<(note1+note2+note3)/3<<endl;
}
void Student::average(){
    cout<<"El promedio del alumno es "<<(note1+note2+note3)/3<<endl;
}

UniversityStudent::UniversityStudent(string _name,int _age,string _code,float _note1,float _note2,float _note3,string _university, string _career, string _specialty) : Student(_name,_age,_code,_note1,_note2,_note3){
    university = _university;
    career = _career;
    specialty = _specialty;
}

void UniversityStudent::showUniversityStudent(){
    cout<<"Universidad: "<<university<<endl;
    showStudent();
    cout<<"Carrera: "<<career<<endl;
    cout<<"Especialidad: "<<specialty<<endl;
}

void UniversityStudent::buyBooks(){
    cout<<getName()<<" es universitari@ y va a comprar libros para la especialidad de "<<specialty<<" de la carrera "<<career<<endl;
}

int main (){

    cout<<"PERSONA\n\n";
    Person person1("Jorge",35);
    person1.showPerson();
    person1.talkPerson();

    cout<<"\n\nEMPLEADO\n\n";
    Employee employee1("Rafael",35,"Director Comercial",45000);
    employee1.showEmployee();
    employee1.moreSalary();

    cout<<"\n\nESTUDIANTE\n\n";
    Student student1("Carlos",45,"SOFT123123",55.13,95.5,100);
    student1.showStudent();
    student1.average();

    cout<<"\n\nUNIVERSITARIO\n\n";
    UniversityStudent university1("Mayra",19,"DHG755656ASD",100,100,95,"Fitech","Desarrollo de Software","Seguridad Informatica");
    university1.showUniversityStudent();
    university1.buyBooks();

    cin.ignore();
    cin.get();
    return 0;
}