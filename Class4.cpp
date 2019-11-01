#include <iostream>

using namespace std;

class Time{
    private:
        int hours, minutes, seconds;
    public:
        Time(int, int, int);
        Time(int);
        void showTime();
};

Time::Time(int _hours, int _minutes, int _seconds){
    hours = _hours;
    minutes = _minutes;
    seconds = _seconds;
}

Time::Time(int timeSec){
    hours =  timeSec/3600;
    timeSec %= 3600;
    minutes = timeSec/60;
    seconds = timeSec%60;
}

void Time::showTime(){
    cout<<"La hora es: "<<hours<<":"<<minutes<<":"<<seconds<<endl;
}

int main (){

    Time actualHour(07,37,30);
    Time hour(15587);
    
    actualHour.showTime();
    hour.showTime();

cin.ignore();
cout<<"Presione cualquier tecla para continuar...";
cin.get();
return 0;
}