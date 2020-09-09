#include<iostream>

using namespace std;

int main(){
    string str;
    string curr;
    int current = 0;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<str;
    for(int i = 0;i<str.length();i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            curr += str[i];
            cout<<str[i]<<endl;
            current += 1;
        }

        if(str[i] == ')'){
            if(curr[current] == '('){
                current -= 1;
            }
        }

        else if(str[i] == '}'){
            if(curr[current] == '{'){
                current -= 1;
            }
        }

        else if(str[i] == ']'){
            if(curr[current] == '['){
                current -= 1;
            }
        }
        cout<<curr;
    }

    if(current == 0){
        cout<<"Okay!!";
    }

    else{
        cout<<"Not Okay !!";
    }
}