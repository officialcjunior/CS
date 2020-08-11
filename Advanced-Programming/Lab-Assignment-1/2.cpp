#include<iostream>

using namespace std;

class Circle
{
    double radius;
    string color;
    public:
    Circle() //Default Contructor
    {
        radius=1.0;
        color="red";
    }
    Circle(double r)  //Parameterised Contructor to initialise the value of radius
    {
        this->radius=r;
        color="red";
    }
    Circle(double r,string c)  //Parameterised Contructor to initialise the values of radius and color
    {
        this->radius=r;
        this->color=c;
    }
    double getRadius()  //Function to get the value of radius
    {
        return radius;
    }
    string getColour()  //Function to get the colour
    {
        return color;
    }
    double getArea()  //Function to calculate the area of the Circle
    {
        return 3.14*radius*radius;
    }

};

int main()  //Driver Function
{
    Circle c1(2.0,"blue");
    Circle c2(2.0);
    Circle c3;
    cout << "Radius of c1 = " << c1.getRadius() << endl;
    cout << "Color of c1 = " << c1.getColour() << endl; 
    cout << "Area of c1 =" << c1.getArea() << endl;
    cout << "Radius of c2 = " << c2.getRadius() << endl;
    cout << "Color of c2 = " << c2.getColour() << endl;
    cout << "Area of c2 =" << c2.getArea() << endl;
    cout << "Radius of c3 = " << c3.getRadius() << endl;
    cout << "Color of c3 = " << c3.getColour() << endl;;
    cout << "Area of c3 = " << c3.getArea() << endl;
    
}
