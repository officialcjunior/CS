#include<iostream>

using namespace std;

int main(){
    string str1 = "string class is part of C++ library";  // a
    string str2(str1,0,12);                               // b
    cout<<"Str1 : "<<str1<<"\n"<<"Str 2: "<<str2<<endl;   // c
    cout<<"First Element: "<<str1.front()<<endl<<"Last Element:"<<str1.back()<<endl<<"Middle Element: "<<str1.at((str1.length())/2)<<endl;  // d
    str2 += " operator";     //e
    string str3 = "Hello Hello Hello"; 
    int pos = 0;
    for(int i=0;i<str3.length();i++){
        if((pos = str3.find("Hello",pos)) != string::npos){
            cout<<(i+1)<<" Time: " << pos <<endl;
        }
        else {
            break;
        }
        pos += 1;
    }
    str3  = str3.erase(str3.rfind("Hello"),(str3.length()-1));

    string name;
    cout<<"Enter your name: ";
    cin>>name;
    str3.replace(str3.rfind("Hello"),str3.length()-1,name);
    cout<<"str3: "<<str3;
}