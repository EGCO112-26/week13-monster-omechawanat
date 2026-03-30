//
//  main.cpp
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#include <iostream>
using namespace std;
#include "monster.h"

int main(int argc, const char * argv[]) {
    monster *P;
    monster m1("Shane",10,1);
    monster m2("joy",10,1);
    monster x[5]={{"jj",150},{"jiji",40}};
    P=new monster("LULU",50,10);
    delete P;


    return 0;
}
