#include<iostream>

using namespace std;

int main(){
    string s1,s2;
    cout<<"Enter the main string: ";
    cin>>s1;
    cout<<"Enter the string to be checked: ";
    cin>>s2;

    string temp = s1+s1;

    int res = temp.find(s2);
    if(res != string::npos){
        cout<<"S2 is a rotated string of S1";
    }

    else{
        cout<<"Its not a rotated string";
    }
}