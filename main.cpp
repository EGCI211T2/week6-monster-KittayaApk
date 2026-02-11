#include <iostream>
using namespace std;

#include "monster.h"


int main() {

    monster c;
    monster A("Aom", 10, 1);
    monster B("mali");
    monster *p;//no constructor called
    p=&c;
    p->display();
    p=&A;
    p->display();
    p=new monster("Momo",20);
    p->display();


    //monster x[5]={{"James "},{"Meaw",20},{"Lala"},{"Zane"},{"Am"}};
   
  delete p;

 p=new monster[3];
 delete []p;


  /*
 
 monster *p,x;
  p=&x;
  p=new monster;
 delete p;

 p=new monster[3];
 delete []p;

*/

}
