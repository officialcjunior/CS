#include<iostream>

#include<map>

using namespace std;

int main()
{
    int n,flag=0;

    map<int,map<string,int> > m;

    map<int,map<string,int> >::iterator it,itr;

    map<string,int>::iterator ptr,p;

    m[1]["January"] = 31;

    m[2]["February"] = 28;

    m[3]["March"] = 31;

    m[4]["April"] = 30;

    m[5]["May"] = 31;

    m[6]["June"] = 30;

    m[7]["July"] = 31;

    m[8]["August"] = 31;

    m[9]["September"] = 30;

    m[10]["October"] = 31;

    m[11]["November"] = 30;

    m[12]["December"] = 31;

    string s,s1;

    cout << "Enter the month:";

    cin >> s;

    for(it = m.begin();it != m.end();++it)
    {
        p = it->second.begin();

        if(s == p->first)
        {
            flag=1;
            cout << p->first <<endl;

            for(ptr = it->second.begin();ptr!=it->second.end();++ptr)
            {
                cout << ptr->second << " days"<<endl;
            }

            itr = m.end();

            itr--;
            
            if( itr == it)
            {
                it++;
                itr = m.begin();

                p = itr->second.begin();
            
                cout << p->first << endl;

                for(auto ptr = itr->second.begin();ptr!=itr->second.end();++ptr)
                {
            
                    cout << ptr->second << " days"<<endl;
            
                }


            }
            else
            {
                it++;
                p = it->second.begin();
                
                cout << p->first << endl;
            
                for(auto ptr = it->second.begin();ptr!=it->second.end();++ptr)
                {
            
                    cout << ptr->second << " days"<<endl;
            
                }
            }
            it--;
            if(it == m.begin())
            {
                itr = m.end();

                itr--;

                p = itr->second.begin();
            
                cout << p->first << endl;

                for(auto ptr = itr->second.begin();ptr!=itr->second.end();++ptr)
                {
            
                    cout << ptr->second << " days"<<endl;
            
                }
            }
            else
            {
    
                it--;
                p = it->second.begin();
            
                cout << p->first<<endl;
            
                for(auto ptr = it->second.begin();ptr!=it->second.end();++ptr)
                {
            
                    cout << ptr->second << " days"<<endl;
            
                }
                it++;
                break;
                
            }
    
        }

    }
    if(flag==0)
    cout << "Invalid Input" << endl;
}