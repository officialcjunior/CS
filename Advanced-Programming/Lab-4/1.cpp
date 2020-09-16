//Aswin C AM.EN.U4CSE19010
#include <iostream>

using namespace std;

template <typename T>

void printIt (T a, T b ) {
	T c = a + b;
	cout << "You gave me " << a << " and " << b << ".\n";
	cout << "Together they make " << c << "." << endl;
}

int main()
{
	string sA = "Oh ";
	string sB = "noes!";
	printIt<int>(1,2);
	printIt<float>(2.6, 3.7);
	printIt<char>('A','1');
	printIt<string>(sA, sB);
}
