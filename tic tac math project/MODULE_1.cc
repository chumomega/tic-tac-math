//Chuma Okoro CISC 3110 MODULE 1 code
#include<iostream>
#include "MODULE_1.h"

using namespace std;

//It will validate the move and make sure it passes the certain requirements

bool validate(int num,int location, int array[], int used[]){
    if(array[location]!=-1 || location<0 || location>8 )
        return false;
    else if(num>9 || num<1)
        return false;
        else if(used[num]==-1)
            return false;

    return true;
}


//The function itself will ask for a move and
//call validate to check if they are valid
void getamove(int &number,int &spot,int arr[],int used[]){
    cout<<"The board is numbered 1-9 in rows. It is a 3 by 3 board."<<endl;
    cout<<"If invalid, program won't continue"<<endl<<endl;

    do{
        cout<<"Please enter the number you want for your move here --> ";
        cin>>number;
        cout<<"Please enter the spot you want for your move here --> ";
        cin>>spot;
    }
    while(!validate(number,spot-1,arr,used));
    return;
}




