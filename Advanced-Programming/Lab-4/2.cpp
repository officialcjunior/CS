//Aswin C AM.EN.U4CSE19010
#include <iostream>
#include <string>
using namespace std;
//Make a template out of the prototype

template <typename T>
T myMax(T one, T two) {
	if ( one > two ) 
		return one;
	else
		return two;
}

int main()
{
	int i_one = 3, i_two = 5;
	double d_one = 5.6, d_two=7.3;
	string s_one = "Donkey", s_two="apple";

	cout << "The max of " << i_one << " and " << i_two << " is "
		<< myMax(i_one, i_two) << endl;
	cout << "The max of " << d_one << " and " << d_two << " is "
		<< myMax(d_one, d_two) << endl;
	cout << "The max of " << s_one << " and " << s_two << " is "
		<< myMax(s_one, s_two) << endl;

	//Test your template on float and string typesreturn 0;
}
