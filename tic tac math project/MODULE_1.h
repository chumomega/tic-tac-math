//CHUMA OKORO FIRST MODDULE CISC 3110

#ifndef MODULE_1
#define MODULE_1

//The function itself will ask for a move and
//call validate to check if they are valid

void getamove(int &number, int &spot, int array[], int used[]);

//It will validate the move and make sure it passes the certain requirements

bool validate(int num, int location, int array[], int used[]);

#endif
