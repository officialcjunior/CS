#include<iostream>

using namespace std;

int find_min_length(string arr[],int n){
    int min = 10101010;
    for(int i=0;i<n;i++){
        if(arr[i].length() < min){
            min = arr[i].length();
        }
    }

    return min;
}

int main(){
    int n;
    cout<<"Enter the number strings you want to enter: ";
    cin>>n;
    string arr[n];
    cout<<"Enter the strings to be checked: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    char curr;
    char next;

    int min_length = find_min_length(arr,n);

    int flag = 0;

    for(int j=0;j<min_length;j++){
        int count = 0;
        for(int i = 0;i<(n-1);i++) {
            curr = arr[i][j];
            next = arr[i+1][j];

            if(curr == next){
                count ++;
            }

            else{
                break;
            }
            if(count == (n-1)){
                cout<<curr;
                flag ++;

            }
        }
    }
    if(!flag)
        cout<<"There is no common prefix among the input strings. ";
}