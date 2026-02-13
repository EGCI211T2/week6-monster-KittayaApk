#ifndef monster_h
#define monster_h

#include <iostream>
#include <string>
using namespace std;

class monster{

private:
    string name;
    int hp,potion;

public:
    monster(string="Anonymous", int=1,int=2);
    ~monster();

    void display();
    void setHP(int);
};

monster::monster(string n, int h, int p){
    name = n;
    hp = h;      // hp starts at 1 (NOT zero)
    potion = p;
}

monster::~monster(){}

void monster::setHP(int h){
    hp = h;
}

void monster::display(){
    if(hp==0) return;

    cout << "Name: " << name
         << " HP: " << hp
         << " Potion: " << potion << endl;
}

#endif