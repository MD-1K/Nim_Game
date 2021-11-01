// Ahmed Sheikh CS 110
// Nim Game using functions.


#include<iostream>
#include<string>
#include "Nim_Game.h"

using namespace std;

int main(){
    int x; // Integer 
    int y; // Integer
    char pile; // Character that declares the pile
    int player = 1; // Starting player number
    int num_to_remove; // integer which tells how many matchsticks to remove.
    string play = "yes"; // Main loop decider
    
    Setup_Initial_Piles(x,y); // Sets up initial number of mathcsticks in each pile.
    
    // Main Loop
    while(play == "yes"){
   
    Get_Move(x,y,player,pile,num_to_remove); // Displays the state of the game, then asks the user to enter a pile to remove sticks from, and a number of sticks to remove.
    Process_Move(x,y,pile, num_to_remove); // Sets the number of matchsticks in the pile after removing the given num_to_remove.
    Is_Game_Over(x,y); // Checks if the game is over.
	
	    // If the game is over asks the user if he wants to play again and resets game.
    if(Is_Game_Over(x,y) == true){
		cout << "YAY!! Player " << player << " Won!!" << endl;
        cout<< "Do You want to play again? (yes or no)"<<endl;
        cin>>play;
        player = 1;
         Setup_Initial_Piles(x,y);
    }
    
    // If player 1 then sets it to player 2, or vice versa
    if(player == 1){
        player = 2;
    }
    else if (player == 2){
        player = 1;
    }
    

    
    
    }
  
    
    
    return 0;
}