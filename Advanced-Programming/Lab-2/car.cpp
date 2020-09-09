#include <iostream>
#include <string>

using namespace std;

class car {
    string brand;
    string model;
    int year;
    int speed;
    int distance;
public:
car():brand("\0"),model("\0"),year(0),speed(0),distance(0){
    cout << "Default constructor .." << endl;
}
car(string b, string m, int y, int s,float d){
    brand = b;
    model = m;
    year = y;
    speed = s;
    distance = d;
    cout << " overloading constructor " << endl;
}
void set_values(string b, string m, int y, int s,float d){
    brand = b;
    model = m;
    year = y;
    speed = s;
    distance = d;
}
void set_brand(string b){
    brand = b;
}

void if_usable(){
    int curr_year = 2020;
    int no_of_years = curr_year-(this->year);   
    if(no_of_years <= 10){
        cout<<"Usable"<<endl;
    }
    else{
        cout<<"Unusable"<<endl;
    }
}

int if_service(){
    int n = (this->distance)%10000;
    if(n>=5000){
        cout<<"Time to service"<<endl;
    }
    else{
        cout<<"It'll run longer"<<endl;
    }
}

void print_values( ){
    cout << "brand " << brand << "model " << model << "year " << year << "speed " << speed <<"disatnce "<<distance<<endl;
}
};

int main () {
    car my_car;
    car my_car2("maruti","800",2000,100,52315);
    car my_car3;
    my_car3.set_values("bmw","xseries",2010,500,11254);

    my_car.print_values();
    my_car2.print_values();
    my_car3.print_values();

    my_car3.if_service();
    my_car2.if_usable();

}