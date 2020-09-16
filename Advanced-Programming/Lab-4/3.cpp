//Aswin C AM.EN.U4CSE19010
#include <iostream>
#include <string>
using namespace std;
//Make a template out of the prototype

template <typename T>
void avg (T array[], int size) {
	T sum=0;
	for (int i=0;i<size;i++)
		sum += array[i];
	cout << "Average is "  << sum/size << endl;
}

int main()
{
	int i[5]={1,2,3,4,5};
	double d[5]={1.1, 2.2, 3.3, 4.4, 5.5};
	char c[4]={'A','B','C','D'};
	avg(i,5);
	avg(d,5);
	avg(c,4);
}
