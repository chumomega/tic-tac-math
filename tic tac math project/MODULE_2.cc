//Chuma Okoro CISC 3110 SECOND MODULE CODE
#include<iostream>
#include"MODULE_2.h"
using namespace std;

//the function display will print the contents of an array
void display(int arr[]){

    cout<<endl<<"-1 in the 3 by 3 means it is blank"<<endl<<endl;

    for(int i=0; i<3;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(int i=3; i<6;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(int i=6; i<9;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<endl<<endl;

    return;
}


//Function will enter move into array
//then mark the number used and print the game board(call display)
void playamove(int what,int where,int arr[],int used[]){

    arr[where-1]=what;
    used[what]=-1;

    display(arr);

    return;
}
