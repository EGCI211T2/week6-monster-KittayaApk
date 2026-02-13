#ifndef thanos_h
#define thanos_h

#include "monster.h"

class Thanos {
private:
    int stones;
    int hp; //extra hp;

public:
    /* constructor and destructor */
    Thanos(int =0,int=1000); //stone hp
    ~Thanos();

    void snap_finger(monster[],int); 
    /* show all hps
    / clear half of monster hp, if stone =6*/
    void operator++(); // increase the stone;
};

Thanos::Thanos(int s,int h){
    stones = s;
    hp = h;
}

Thanos::~Thanos(){}

void Thanos::operator++(){
    stones++;
}

void Thanos::snap_finger(monster m[],int n){

    if(stones==6){
        for(int i=0;i<n/2;i++){
            m[i].setHP(0);   // kill half
        }
    }
}

#endif