#include <iostream>

using namespace std;

class Point{
    private:
        int x,y;
    public:
        Point();
        void setPoint(int, int); // Establecer valores para los atributos
        int getPointX();
        int getPointY();
};

Point::Point(){
}

void Point::setPoint(int _x, int _y){
    x = _x;
    y = _y;
}
int Point::getPointX(){
    return x;
}
int Point::getPointY(){
    return y;
}


int main (){

    Point point1;

    point1.setPoint(15,18);
    cout<<"El valor del punto en X es: "<<point1.getPointX()<<endl;
    cout<<"El valor del punto en Y es: "<<point1.getPointY()<<endl;

    cin.ignore();
    cout<<"Presione cualquier tecla para continuar...";
    cin.get();
    return 0;
}


