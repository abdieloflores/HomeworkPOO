#include <iostream>
#include <string.h>

using namespace std;

//PROGRAM FOR THE DATE WITH AN ARRAY.
class Date{

    private:
        int day, month, year;
    public:
        Date(int [8]);
        void show();
};

Date::Date(int date[]){ 
    day = date[0];
    month = date[1];
    year = date[2];
}

void Date::show(){
    cout<<"La fecha es: "<<day<<" / "<<month<<" / "<<year<<endl;
}

int main (){
    int date[3];
    for (int i = 0; i < 3; i++) {
        if (i==0){cout<<"Introduzca el día: ";cin>>date[i];}
        if (i==1){cout<<"Introduzca el mes: ";cin>>date[i];}
        if (i==2){cout<<"Introduzca el año: ";cin>>date[i];}
    }
    Date today(date);
    today.show();

cin.ignore();
cout<<"\n\nPresiones cualquier tecla para continuar..."<<endl;
cin.get();
return 0;
}