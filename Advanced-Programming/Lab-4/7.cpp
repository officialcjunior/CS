//Aswin C AM.EN.U4CSE19010
#include <iostream>
#include <array>
using namespace std;
class removeInstance
{
	array<int,100> nums;
	int num,n,length;

	public:
	void insert()
	{
		cout<<"Enter the number of elements"<<endl;
		cin>>n;
		cout<<"Enter the elements"<<endl;
		for(int i=0;i<n;i++)
			cin>>nums[i];
		cout<<"Enter the number to be removed"<<endl;
		cin>>num;
	}
	int removal()
	{
		int i,j,k=0,temp;
		for(i=0;i<n;i++)
		{
			if(nums[i]!=num)
			{
				nums[j]=nums[i];
				k++;
			}
		}
		for(i=0;i<=k-1;i++)
		{
			for(j=0;i<n-1;j++)
			{
				if(nums[j]==num)
				{
					temp=nums[j];
					nums[j]=nums[j+1];
					nums[j+1]=temp;
				}
			}
		}      
		length=k;
		return length;
	}
	void print()
	{
		cout << "The array after changing :"<<endl;
		for(int i=0;i<length;i++)
			cout<<nums[i]<<" ";
		cout<<endl;
	}  
};

int main()
{
	removeInstance obj;
	obj.insert();
	cout << "Length of the array after removing the instances: "  <<obj.removal()<<endl;
	obj.print();
}
