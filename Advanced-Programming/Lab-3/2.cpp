#include<iostream>
#include<cstdio>

using namespace std;

bool Check(string str){
    int len = str.length();
    int count = 0;
    for(int i=0;i<len;i++){
        if(str[i]=='('){
            count += 1;
        }

        else if(str[i] == ')' && count>0){
            count -= 1;
        }
    }

    if(count==0){
        return true;
    }
    
    else {
        return false;
    }
}

int main(){
    string str;
    cout<<"Enter the String to be checked: ";
    cin>>str;
    if(Check(str)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}