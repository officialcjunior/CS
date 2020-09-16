//Aswin C AM.EN.U4CSE19010
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
	array<int,5> myarray1 = {3,4,5,2,1};
	array<int,5> myarray2 = {1,2,3,5};

	cout <<"Size "<<myarray2.size()<<endl;

	cout <<"Max size "<<myarray2.max_size()<<endl;

	cout <<"Size "<<myarray1.size()<<endl;
	cout <<"Max size "<<myarray1.max_size()<<endl;

	array<int,5>::iterator i;

	cout << "The elements"<<endl; 
	for(i= myarray2.begin(); i < myarray2.end(); i++)
		cout << *i << " ";
	cout << endl;

	for (i = myarray1.begin(); i < myarray1.end(); i++)
		cout << *i << " ";
	cout << endl;

	cout << "Front and back of first array" << myarray1.front() << " " << myarray1.back()<< endl;
	cout << "Front and back of second array" << myarray2.front() << " " << myarray2.back()<<endl;

	sort(myarray1.begin(), myarray1.end());

	for (int j:myarray1)
		cout << j << " ";
	myarray2.swap(myarray1);
	cout<<endl;
	myarray2.fill(5);
	for (int j:myarray2)
		cout << j << " ";
	/*
	   for (int j:myarray2)
	   cout << j << " ";
	   cout << endl; 

	   cout << myarray2.at(3);

	   cout << " " << myarray2[3] << endl;

	   cout << " size ";

	   cout <<myarray2.size();

	   cout << " Mx size ";

	   cout <<myarray2.max_size();

	   myarray2.fill(5);


	   for (int j:myarray2)
	   cout << j << " ";
	   cout << endl; 


	   myarray2.swap(myarray);


	   for (int j:myarray2)
	   cout << j << " ";
	   cout << endl; 
	   sort(myarray2.begin(), myarray2.end());


	   cout << "after sortng ";

	   for (int j:myarray2)
	   cout << j << " ";
	   cout << endl; 
	 */
}


















