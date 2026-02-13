#include <iostream>
using namespace std;

#include "monster.h"
#include "thanos.h"

int main() {
    monster c;
    monster A("Aom", 10, 1);
    monster B("mali");

    B+=10;//B.operator+=(10);
    --A; //A.operator--();

    cout<<"====The stronger hp is====\n";

    if(A>B)A.display();
    else B.display();

    cout<<"\n=====Thanos Story====\n";

    Thanos T;

    int n=4;//number of monsters
    monster *m=new monster[n];

 ++T;
    ++T;
    T.snap_finger(m,n);

    ++T;
    ++T;
    T.snap_finger(m,n);

    ++T;
    ++T;
    T.snap_finger(m,n); // clear half when stones = 6

    int i;
    for(i=0;i<n;i++)
        m[i].display(); // only alive monsters show

    delete [] m;
}
    /* monster *p;//no constructor called
    p=&c;
    p->display();
    p=&A;
    p->display();
    p=new monster("Momo",20);
    p->display();

    delete p;

    p=new monster[3];
    delete []p;

    monster *p;
    p=new monster(50,2);
    p->display();
    delete p;*/
