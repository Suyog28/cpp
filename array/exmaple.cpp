#include<iostream>
using namespace std;


class Room{
    public:
        double length;
        double breadth;
        double height;


double calculateArea(){
    return length * breadth;
};

double calculateVolume(){
    return length * breadth * height;
}

};

int main(){


    Room room1;

    room1.height = 20;
    room1.length = 40;
    room1.breadth = 500;


    cout<<"Area of room:"<<room1.calculateArea()<<endl;
    cout<<"Valume of room:"<<room1.calculateVolume()<<endl;
    return 0;
}