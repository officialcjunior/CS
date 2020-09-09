#include<iostream>

using namespace std;

int pos_find(string s){
    int index;
    for(int i=0;i<s.length();i++){
        index=s.find_first_of(s[i],i+1);
        if(index == string::npos){
            return i;
        }
        s.erase(i+1, s[i]);
    }
    return -1;
}

int main(){
    string s;
    cout<<"Enter the string to be checked: ";
    cin>>s;
    cout<<"First non-repeating character at: "<<pos_find(s);
}