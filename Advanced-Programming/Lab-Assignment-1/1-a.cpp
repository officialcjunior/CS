#include <iostream>
using namespace std;

// create a class
class Room {
	private:
		double length;
		double breadth;
		double height;
	public:
		double calculateArea() {
			return length * breadth;
		}
		double calculateVolume() {
			return length * breadth * height;
		}
		void set_length() {
			length = 42.5;
		}
		void set_breadth() {
			breadth = 30.8;
		}
		void set_height() {
			height = 19.2;
		}
};

int main() {
	// create object of Room class
	Room room1;

	// assign values to data members
	room1.set_length();
	room1.set_breadth();
	room1.set_height();

	// calculate and display the area and volume of the room
	cout << "Area of Room =  " << room1.calculateArea() << endl;
	cout << "Volume of Room =  " << room1.calculateVolume() << endl;

	return 0;
}
