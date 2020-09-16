//Aswin C AM.EN.U4CSE19010
#include <iostream>
#include <string>
#include <array>
using namespace std;

template <typename T>
int search (array<T,5> arr, T element) {
	for (int i=0;i<5;i++) {
		if (element == arr[i]) {
			cout<< "Class Template Search : Element : "<<element<<" Found : at "<< i + 1 <<endl;
			return 1;
		}
	}
	cout << "Not found"<<endl;
	return 0;
}

int main()
{
	
	int element;
	array<int,5> int_array;
	array<int,5>::iterator i;
	cout << "Enter 5 Elements for Searching Int :";
	for(i= int_array.begin(); i < int_array.end(); i++)
		cin >> *i;
	cout << "Enter element to search " << endl;
	cin >> element;
	cout << "Your data"<<endl;
	for (int j:int_array)
		cout << j << " ";
	cout<<endl;
	search<int>(int_array,element);

	float element1;
	array<float,5> float_array;
	array<float,5>::iterator j;
	cout << "Enter 5 Elements for Searching Float:";
	for(j = float_array.begin(); j < float_array.end(); j++)
		cin >> *j;
	cout << "Enter element to search ";
	cin >> element1;
	cout << "Your data"<<endl;
	for (float k:float_array)
		cout << k << " ";
	cout<<endl;
	search<float>(float_array,element1);
}
