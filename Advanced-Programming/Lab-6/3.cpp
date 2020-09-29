#include<iostream>

#include<set>

#include<map>

using namespace std;

int main()
{
    set <pair<int,int> > s;

    map<int,int> mp;

    pair<int,int> a = make_pair(1,9);

    pair<int,int> b = make_pair(10,20);
    
    pair<int,int> c = make_pair(21,40);

    pair<int,int> d = make_pair(41,60);
    
    pair<int,int> e = make_pair(61,80);

    pair<int,int> f = make_pair(81,100);

    s.insert(a);

    s.insert(b);

    s.insert(c);

    s.insert(d);

    s.insert(e);

    s.insert(f);
    
    int n,x,count;

    cout << "Enter the no of people travelling in the bus:";

    cin >> n;

    cout << "Enter the age of " << n << " passengers of the bus:";
    for(int i = 0;i < n;i++)
    {
        cin >> x;

        for(auto it :s)
        {
            if(x >= it.first && x<=it.second)
            {
                
                cout <<"Catergory " << it.first<< " - " << it.second << endl;

                ++mp[it.first];

                
            }
        }

    }

    for(auto it:s)
    {
        cout << it.first << " - " << it.second << " number of people = " << mp[it.first] << endl;
    }
}