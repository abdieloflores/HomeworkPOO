#include <iostream>
#include <string.h>

using namespace std;

//PROGRAM FOR THE DATE WITH AN ARRAY.
class Date{

    private:
        int day, month, year;
    public:
        Date(char [8]);
        void show();
};

Date::Date(char date[]){ 
    day = ((date[0]-'0')*10)+(date[1]-'0');
    month = ((date[2]-'0')*10)+(date[3]-'0');
    year = ((date[4]-'0')*1000)+((date[5]-'0')*100)+((date[6]-'0')*10)+(date[7]-'0');
}

void Date::show(){
    cout<<"La fecha es: "<<day<<" / "<<month<<" / "<<year<<endl;
}

int main (){
    char date[] = {"11102019"};
    
    Date today(date);
    today.show();

cin.ignore();
cout<<"\n\nPresiones cualquier tecla para continuar..."<<endl;
cin.get();
return 0;
}