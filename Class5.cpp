#include <iostream>
#include <string.h>

using namespace std;

class Dog{
    private:
        string name, breed;
    public:
        Dog(string,string);
        ~Dog();
        void showData();
        void play();
};

Dog::Dog(string _name, string _breed){
    name = _name;
    breed = _breed;
}
Dog::~Dog(){
}

void Dog::showData(){
    cout<<"---- SHOW DATA ----"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Breed: "<<breed<<endl;
}

void Dog::play(){
    cout<<"\nEl perro "<<name<<" esta jugando."<<endl;
}

int main (){

    Dog dog1("Alfredito","Chihuahua");

    dog1.showData();
    dog1.play();
    dog1.~Dog();


    cin.ignore();
    cout<<"Prsione cualquier tecla para contnuar...";
    cin.get();
    return 0;
}

