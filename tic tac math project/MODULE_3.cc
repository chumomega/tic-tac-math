//Chuma Okoro CISC 3110 Third Module code

#include <iostream>
#include "MODULE_3.h"

//this function will check an narray if someone wins
//winning means to get 3 numbers in a row equal to 15(not including -1)

bool checkforwin(int array[]){
    if(array[0]+array[1]+array[2]==15 && array[0]!=-1 && array[1]!=-1 && array[2]!=-1 )
        return true;
    else if(array[3]+array[4]+array[5]==15 && array[3]!=-1 && array[4]!=-1 && array[5]!=-1)
        return true;
    else if(array[6]+array[7]+array[8]==15 && array[6]!=-1 && array[7]!=-1 && array[8]!=-1)
        return true;
    else if(array[0]+array[3]+array[6]==15 && array[0]!=-1 && array[3]!=-1 && array[6]!=-1)
        return true;
    else if(array[1]+array[4]+array[7]==15 && array[1]!=-1 && array[4]!=-1 && array[7]!=-1)
        return true;
    else if(array[2]+array[5]+array[8]==15 && array[2]!=-1 && array[5]!=-1 && array[8]!=-1)
        return true;
    else if(array[0]+array[4]+array[8]==15 && array[0]!=-1 && array[4]!=-1 && array[8]!=-1)
        return true;
    else if(array[2]+array[4]+array[6]==15 && array[2]!=-1 && array[4]!=-1 && array[6]!=-1)
        return true;
    else
        return false;
}

