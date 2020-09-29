#include<iostream>

#include<set>

using namespace std;

int main()
{
    int n;

    multiset<int> s;

    cout << "Enter the number of iterations : ";

    cin >> n;

    while(n--)
    {
        int choice;

        cout << "Enter the 1 to insert\nEnter 2 to search in the set\nChoice = ";

        cin >> choice;

        if(choice == 1)
        {
            int x;

            cout << "Enter the number you want to insert into the set:";

            cin >> x;

            auto pos = s.find(x);

            if(pos == s.end())
            {  
                s.insert(x);

                cout << "Number " << x << " is inserted successfully" << endl;
            }
            else
            {
                s.insert(x);
                
                cout << "Number " << x << " found " << s.count(x) << "times in the array" << endl;
            }
            
        }
        else if(choice == 2)
        {
            int x;
            
            cout << "Enter the number you want search in the set:";

            cin >> x;

            auto pos = s.find(x);

            if(pos == s.end())
                cout << x << " not found" << endl;
            else
                    cout << "Number " << x << " found " << s.count(x) << "times in the array" << endl;
            
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }
        
        
    }
}
