#include<iostream>
using namespace std;

class Vehicle{
private:
int passenger;
double baggage;
public:
void Ride(int person){passenger += person;}
void Load(double weight){baggage += weight;}
int getPassenger(){ return passenger;}
double getBaggage(){ return baggage;}
};

class Airplane : public Vehicle{
private:
int crew_man;
public:
Airplane(int crew) {crew_man = crew;}
void TakeCrew(int crew){crew_man += crew;}
int getCrew(){return crew_man;}
void ShowData(){
cout<<"<<Airplane>> "<<endl;
cout<<"passenger: "<<getPassenger()<<endl;
cout<<"baggage: "<<getBaggage()<<endl;
cout<<"crew man: "<<getCrew()<<endl;
}
};

int main(){
Airplane a(10);
a.ShowData();
}
