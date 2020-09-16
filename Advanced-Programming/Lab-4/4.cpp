//Aswin C AM.EN.U4CSE19010
#include <iostream>

using namespace std;

template <class T>

class Queue {
	T queue[50];
	int rear, front;

	public:

	Queue() {
		rear = 0;
		front = 0;
	}

	void Insert() {
		int size;
		cout << "How many elements do you want to enter ?";
		cin >> size;
		for (; rear < size; rear++) {
			cin >> queue[rear];
		}
	}

	void Display() {
		cout << "Queue status: ";
		for (int i = front; i < rear; i++)
			cout<<queue[i]<< " ";
		cout << endl;
	}
	void Delete() {
		cout<< "Popping " << queue[front] <<" at position "<< front + 1 <<endl;
		front++;
	}
};

int main () {
	Queue <int> int_object;
	cout << "Here be integers\n"; 
	int_object.Insert();
	int_object.Display();
	int_object.Delete();
	int_object.Display();

	Queue <float> float_object;
	cout << "Here be floats\n"; 
	float_object.Insert();
	float_object.Display();
	float_object.Delete();
	float_object.Display();

	Queue <char> char_object;
	cout << "Here be chars\n"; 
	char_object.Insert();
	char_object.Display();
	char_object.Delete();
	char_object.Display();

}


