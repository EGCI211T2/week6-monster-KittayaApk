#include <iostream>
using namespace std;

#include "monster.h"
#include "thanos.h"

int main() {

    Thanos T;

    int n;
    cout<<"How many monsters?";
    cin>>n;

    monster *m=new monster[n];

    ++T;
    ++T;
    T.snap_finger(m,n);

    ++T;
    ++T;
    T.snap_finger(m,n);

    ++T;
    ++T;
    T.snap_finger(m,n); // kill half

    int i;
    for(i=0;i<n;i++)
        m[i].display(); // only alive monsters shown

    delete [] m;

}