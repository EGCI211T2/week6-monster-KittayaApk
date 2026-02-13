#include <iostream>
using namespace std;

#include "monster.h"

int main() {
    monster c;
    monster A("Aom", 10, 1);
    monster B("mali");

    B+=10;//B.operator+=(10);
    --A; //A.operator--();

    cout<<"====The stronger hp is====\n";

    if(A>B)A.display();
    else B.display();

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
}