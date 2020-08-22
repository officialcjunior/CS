#include<bits/stdc++.h>
using namespace std;
class Time
{
   private:
     int hour;
     int minute;
     int second;
   public:
     Time(): hour(0),minute(0),second(0){
            cout<< "Constructor is created" << endl;
     };
     Time(int h,int m,int s): hour(h),minute(m),second(s){
            cout<< "Constructor is given values" << endl;
     };
     int getHour(){
         return hour;
     }
     int getMinute(){
         return minute;
     }
     int getSecond(){
         return second;
     }
     void setHour(int h){
         this->hour=h;
     }
     void setMinute(int m){
         this->minute=m;
     }
     void setSecond(int s){
         this->second=s;
     }
     void setTime(int h,int m,int s){
          this->hour=h;
          this->minute=m;
          this->second=s;
     }
     void print(){
          cout<< ((hour<10)?"0":"")<<hour<<":"<<((minute<10)?"0":"")<<minute<<":"<<((second<10)?"0":"")<<second<<endl;
     }
     void nextSecond(){
          second+=1;
          if(second==60)
          {
            second=0;
            minute+=1;
          }
          if(minute>59)
          {
            minute-=60;
            hour+=1;
          }
          if(hour>23)
          {
            hour=0;
          }
          cout<< ((hour<10)?"0":"")<<hour<<":"<<((minute<10)?"0":"")<<minute<<":"<<((second<10)?"0":"")<<second<<endl;
     }   
};
int main(){
    int h,m,s;
    cout<<"Enter the time(just enter hours,minutes and seconds with space)"<<endl;
    cin>>h>>m>>s;
    Time t(h,m,s);
    t.print();
    t.nextSecond();
    return 0;
}
