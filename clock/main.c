#include<iostream>
using namespace std;

class Clock {
public:
    int hour;
    int min;
    int sec;
    string tm;
    Clock(int a,int b,int c,string d){
        hour = a;
        min = b;
        sec = c;
        tm = d;
    }
    void display(){
        cout<<"Clock = "<<hour<<":"<<min<<":"<<sec<<" "<<tm<<endl;
    }
};
class HMSClock :  Clock {
public:
    HMSClock(int a,int b,int c,string d):Clock(a,b,c,d){}
    void display(){
        if(tm == "PM"){
            cout<<"HMSClock = "<<hour+12<<"h:"<<min<<"m:"<<sec<<"s"<<endl;
        }else{
            cout<<"HMSClock = "<<hour<<"h:"<<min<<"m:"<<sec<<"s"<<endl;
        }
    }

};

int main(){
 Clock cc(10, 25, 43, "AM");
 HMSClock hmsc(10, 25, 43, "PM");
 cc.display();
 hmsc.display();
 return 0;
}
