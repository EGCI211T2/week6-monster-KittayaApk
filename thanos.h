#ifndef THANOS_H
#define THANOS_H

#include <iostream>
#include "monster.h"
using namespace std;

class Thanos {

private:
    int stones;
    int hp;

public:
    Thanos(int = 0, int = 1000);
    ~Thanos();

    void snap_finger(monster[], int);
    void operator++();  // increase stone
};

/* ===== Constructor ===== */

Thanos::Thanos(int s, int h) {
    stones = s;
    hp = h;
    cout << "Thanos is here. HP = " << hp << endl;
}

/* ===== Destructor ===== */

Thanos::~Thanos() {
    cout << "Thanos disappears." << endl;
}

/* ===== Operator ++ ===== */

void Thanos::operator++() {
    stones++;
    cout << "Stone collected: " << stones << endl;
}

/* ===== Snap Function ===== */

void Thanos::snap_finger(monster m[], int n) {

    cout << "===== Snap Finger =====" << endl;

    if (stones == 6) {

        cout << "All stones collected!" << endl;

        // kill half of monsters
        for (int i = 0; i < n / 2; i++) {
            m[i].setHP(0);
        }
    }

    // show all monster HP
    for (int i = 0; i < n; i++) {
        cout << "Monster " << i + 1
             << " HP: " << m[i].getHP()
             << endl;
    }
}

#endif
