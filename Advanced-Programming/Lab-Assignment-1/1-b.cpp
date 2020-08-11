#include<bits/stdc++.h>

using namespace std;

class Room{
    private:
        double length;
        double breadth;
        double height;
    public:
        Room()
        {
            length=42.5;
            breadth=30.8;
            height=19.2;
        }
        Room(double length,double breadth,double height)
        {
            this->length=length;
            this->breadth=breadth;
            this->height=height;
        }
        Room(Room &r1)
        {
            length = r1.length;
            breadth = r1.breadth;
            height= r1. height;
        }
        double calculateArea()
        { 
            return length * breadth; 
        } 
        double calculateVolume() 
        {
            return length * breadth * height; 
        }
        void set_length()
        {
            length=42.5;
        }
        void set_breadth()
        {
            breadth=30.8;
        }
        void set_height()
        {
            height=19.2;
        }   
};

int main()
{
    Room r1,
    Room r2(10.8,8.6,15.5);
    Room r3(r2);
    cout << "Area of the room =" << r1.calculateArea() << endl;
    cout << "Volume of the room = " << r1.calculateVolume() << endl;

}
