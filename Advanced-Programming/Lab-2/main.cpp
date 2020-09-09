#include<iostream>
#include<string.h>

using namespace std;

class elective { 

private: 
    int code; 
    int capacity; 
    int reserved; 

public: 
    elective(int code, int capacity, int reserved);
    void printStatus(); 
    void add(int n);
    void reduce(int n);
}; 

void elective::printStatus() { 
    float percentage;
    percentage = (((this->reserved)*100)/(this->capacity));
    cout<<"Elective "<<this->code<<": "<<this->reserved<<"/"<<this->capacity<<" ("<<percentage<<"%) seats allotted\n";
} 

elective::elective(int c, int ca, int r) { 
    code = c;
    capacity = ca;
    reserved = r;
} 

int main() { 
    int reserved = 0, 
    capacity = 0; 
    cout << "Provide elective capacity: "; 
    cin >> capacity; 
    cout << "Provide number of reserved seats: "; 
    cin >> reserved; 
    elective booking(1, capacity, reserved); 
    booking.printStatus();
    return 0; 
} 
