#ifndef thanos_h
#define thanos_h

#include <iostream>
using namespace std;

#include "monster.h"

class Thanos {
private:
	int stones;
	int hp; 
public:
    Thanos(int =0,int=1000); //stone hp
    ~Thanos();
	
	void snap_finger(monster[],int); 
	/* show all hps
	/ clear half of monster hp, if stone =6*/
	void operator++(); // increase the stone;
};

Thanos::Thanos(int s, int h){
    stones=s;
    hp=h;
    cout<<"Thanos is here \n";
}

Thanos::~Thanos(){
    cout<<"Thanos is gone\n";
}

void Thanos::operator++(){
	stones++;
	cout<<"Stone collected: "<<stones<<endl;
}

void Thanos::snap_finger(monster m[],int n){

    int i;

    cout<<"===== Snap Finger =====\n";

    if(stones==6){
        cout<<"All stones collected!\n";
        for(i=0;i<n/2;i++){
            m[i].setHP(0);
        }
    }

    for(i=0;i<n;i++)
        m[i].display();
}

#endif