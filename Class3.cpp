#include <iostream>
#include <string.h>

using namespace std;

class Date{

    private:
        int day, month, year;
    public:
        Date(int,int,int);
        Date(long);
        void show();
};

Date::Date(int _day,int _month, int _year){
    day = _day;
    month = _month;
    year = _year;
}
Date::Date(long date){ 
    day = int(date/1000000);
    month = int((date-day*1000000)/10000);
    year = int(date-(day*1000000)-(month*10000));
}
/*Date::Date(long date){ 
    day = int (date-(year*10000)-(month*100));
    month = int((date-year*10000)/100);
    year = int(date/10000);
}*/

void Date::show(){
    cout<<"La fecha es: "<<day<<" / "<<month<<" / "<<year<<endl;
}

int main (){

    Date today(11, 10, 2019);
    Date today2(11102019);
    Date today3(20191011);
    today.show();
    today2.show();
    today3.show();

cin.ignore();
cout<<"\n\nPresiones cualquier tecla para continuar..."<<endl;
cin.get();
return 0;
}