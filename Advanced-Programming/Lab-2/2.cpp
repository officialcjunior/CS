#include <iostream> 
#include <string.h>

using namespace std;

class elective { 
public: 

elective(int code, int capacity, int reserved); 
void printStatus();
bool addSeats(int number_seats); 
bool cancelseats(int number_seats); 

private: 
int code; 
int capacity; 
int reserved; 

}; 

void elective::printStatus(){
    float percentage;
    percentage = (((this->reserved)*100)/(this->capacity));
    cout<<"Elective "<<this->code<<": "<<this->reserved<<"/"<<this->capacity<<" ("<<percentage<<"%) seats allotted\n";
}

elective::elective(int c, int ca, int r) { 
    code = c;
    capacity = ca;
    reserved = r;

} 

bool elective::addSeats(int number_seats) { 
    int r = this->reserved;
    r += number_seats;
    if(r > this->capacity){
        return false;
    }
    this->reserved = r;
    return true; 
} 

bool elective::cancelseats(int number_seats){ 
    int c = this->capacity;
    c -= number_seats;
    if(c < this->reserved || c<=0){
        return false;
    }
    this->capacity = c;
    return true;
} 

int main(){ 
    int reserved = 0;
    int capacity = 0; 
    
    cout << "Provide elective capacity: "; 
    cin >> capacity; 
    cout << "Provide number of reserved seats: "; 
    cin >> reserved; 
    
    elective booking(1, capacity, reserved); 
    
    string command = ""; 
    cout << "What would you like to do?: ";
    cin>>command;
    int n;

    while (command != "quit") { 
        cin>>n;
        if(command == "quit"){
            break;
        }
        else if(command=="add"){
            if(booking.addSeats(n)){
                booking.printStatus();
            }
            else{
                cout<<"Cannot perform this operation"<<endl;
            }
            
        }
        else if(command=="cancel" || command=="reduce"){
            if(booking.cancelseats(n)){
                booking.printStatus();
            }
            else{
                cout<<"Cannot perform this operation"<<endl;
            }
        }
        else{
            cout<<"Cannot perform this operation";
        }
        cout << "What would you like to do?: ";
        cin>>command;
        if(command=="quit"){
            break;
        }
    } 
return 0; 
} 