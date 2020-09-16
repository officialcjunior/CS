//Aswin C AM.EN.U4CSE19010
#include <iostream>
#include <array>

using namespace std;

class removeInstance
{
	array<int,100> nums;
	int n, j=0;

	public:
	void insert()
	{
		cout<<"Enter the number of elements"<<endl;
		cin>>n;
		cout<<"Enter the elements"<<endl;
		for(int i=0;i<n;i++)
			cin>>nums[i];
	}
	int removal()
	{

		for (int i=0; i < n-1; i++) 
			if (nums[i] != nums[i+1]) 
				nums[j++] = nums[i]; 

		nums[j++] = nums[n-1]; 
		return j; 
	}
	void print()
	{
		cout << "The array after changing :"<<endl;
		for(int i=0;i<j;i++)
			cout<<nums[i]<<" ";
		cout<<endl;
	}  
};

int main()
{
	removeInstance obj;
	obj.insert();
	cout << "Length of the array after removing the duplicates: "  <<obj.removal()<<endl;
	obj.print();
}
