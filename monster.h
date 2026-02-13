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
    void Attack(monster &);
    void heal();
    monster(string="Anonymous", int=1,int=2);
    monster (int,int=100);
    ~monster();
    void display();

    bool operator>(monster &x);
    monster& operator--();   
    monster& operator+=(int);  
};

monster& monster::operator--(){
    --hp;
    return *this;
}

monster& monster::operator+=(int x){
    this->hp += x;
    return *this;
}

bool monster::operator>(monster &x){
    if(hp>x.hp) return true;
    else return false;
}

monster::~monster(){
    cout<<name<< " is gone."<<endl;
}

monster::monster(string n, int h, int p){
    name = n;
    hp = h;
    potion = p;
    cout << "Monster " << name << " is here" << endl;
}

monster::monster(int h, int p){
    name = "Unknown";
    hp = h;
    potion = p;
    cout << "Monster " << name << " is here" << endl;
}

void monster::display(){
    cout << "Name: " << name 
         << " HP: " << hp 
         << " Potion: " << potion << endl;
}

#endif