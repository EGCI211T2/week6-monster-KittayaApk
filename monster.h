#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class monster {

private:
    string name;
    int hp;

public:
    monster();
    ~monster();

    void display();
    void setHP(int);
    int getHP();
};

/* ===== Constructor ===== */

monster::monster() {
    static int count = 1;
    name = "Monster_" + to_string(count++);

    hp = rand() % 201 + 100;   // 100 - 300 (never 0)

    cout << name << " is here. HP = " << hp << endl;
}

/* ===== Destructor ===== */

monster::~monster() {
    cout << name << " is gone." << endl;
}

void monster::display() {
    if (hp == 0) return;   // do not display dead monsters

    cout << name << " HP = " << hp << endl;
}

void monster::setHP(int h) {
    hp = h;
}

int monster::getHP() {
    return hp;
}

#endif
