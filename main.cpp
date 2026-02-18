#include <iostream>
#include <ctime>
using namespace std;

#include "monster.h"
#include "thanos.h"

int main() {

    srand(time(0));   // random seed

    Thanos T;

    int n;
    cout << "How many monsters? ";
    cin >> n;

    monster *m = new monster[n];

    cout << "\n--- The story begins ---\n";

    ++T;
    ++T;
    T.snap_finger(m, n);

    ++T;
    ++T;
    T.snap_finger(m, n);

    ++T;
    ++T;
    T.snap_finger(m, n);   // When stones = 6, kill half

    cout << "\n===== SURVIVORS =====\n";

    for (int i = 0; i < n; i++)
        m[i].display();   // only alive monsters shown

    delete[] m;

    return 0;
}
