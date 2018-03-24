//CHUMA OKORO MAIN PROGRAM CISC 3110
#include <iostream>
#include "MODULE_1.h"
#include "MODULE_2.h"
#include "MODULE_3.h"

using namespace std;


int main(){


    int num1, spot1 ;
    int array[9]={-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int used[10];

    display(array);
    while(!checkforwin(array)){
        getamove(num1,spot1,array,used);
        playamove(num1,spot1,array,used);
    }
    cout<<"Congrats, you win!!"<<endl<<endl;
    return 0;


}
