#include <iostream>
#include <string.h>

using namespace std;

class Date{
    
    private:
        int day, month, year;
    public:
        Date(int,int,int);
        void show();
};

Date::Date(int _day,int _month, int _year){
    day = _day;
    month = _month;
    year = _year;
}




int main (){


cin.ignore();
cout<<"\n\nPresiones cualquier tecla para continuar..."<<endl;
cin.get();
return 0;
}