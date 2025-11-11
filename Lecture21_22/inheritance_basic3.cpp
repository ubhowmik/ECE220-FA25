#include<iostream>
using namespace std;

class Vehicle{
protected:
int passenger;
double baggage;
public:
Vehicle(int person, double weight){
passenger=person;
baggage=weight;
}
//void Ride(int person){passenger += person;}
//void Load(double weight){baggage += weight;}
//int getPassenger(){ return passenger;}
//double getBaggage(){ return baggage;}
};

class Airplane : public Vehicle{
private:
int crew_man;
public:
//Airplane(int crew) {crew_man = crew;}

//Airplane(int person, double weight, int crew) {crew_man = crew;}

Airplane(int person, double weight, int crew):Vehicle(person, weight){crew_man = crew;}

void TakeCrew(int crew){crew_man += crew;}
int getCrew(){return crew_man;}
void ShowData(){
cout<<"<<Airplane>> "<<endl;
//cout<<"passenger: "<<getPassenger()<<endl;
//cout<<"baggage: "<<getBaggage()<<endl;

cout<<"passenger: "<<passenger<<endl;
cout<<"baggage: "<<baggage<<endl;

cout<<"crew man: "<<getCrew()<<endl;
}
};

int main(){
Airplane a(120,1300.00,10);
a.ShowData();
}
