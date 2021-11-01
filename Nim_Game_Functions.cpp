#include<iostream>
#include<ctime>
#include<string>
#include"Nim_Game.h"

using namespace std;

void Setup_Initial_Piles(int & pile_a, int & pile_b){
   
   srand((unsigned)time(0));
    pile_a = (rand()%9)+2;
    pile_b = (rand()%9)+2;

    return;
}

void Display_Game_State(int pile_a, int pile_b, int cur_turn){
    cout<< "Pile A has "<<pile_a<<" Number of Matchsticks."<<endl;
    cout<<"Pile B has "<<pile_b<<" Number of Matchsticks"<<endl;
    cout<<"Player " << cur_turn<< " it is your turn"<<endl;
    return;
}

void Get_Move(int pile_a, int pile_b, int cur_turn, char & pile_chosen,  int & num_to_remove){
    Display_Game_State(pile_a, pile_b,cur_turn);
       cout<<"Please choose a pile to remove sticks from (enter a or b)"<<endl;
    cin>> pile_chosen;
    while(!(pile_chosen == 'a' || pile_chosen == 'b' )){
        cout<<"Illegal move"<<endl;
        cout<<"Re-enter the number of pile you would like to pick from."<<endl;
        cin>>pile_chosen;
    }
    
    if(pile_chosen == 'a'){
     cout<<"Please enter the number of matchsticks you want to remove."<<endl;
            cin>>num_to_remove;
            
               while(num_to_remove <= 0){
        cout<<"Illegal move"<<endl;
        cout<<"Re-enter the number of matchsticks you would like to remove."<<endl;
        cin>>num_to_remove;
    }
         
            while(num_to_remove>pile_a){
                cout<<"Illegal Move"<<endl;
                cout<<"Re-enter the number of matchsticks you would like to remove."<<endl;
                cin>>num_to_remove;
            }
    }
   
            if(pile_chosen == 'b'){
              cout<<"Please enter the number of matchsticks you want to remove."<<endl;
            cin>>num_to_remove;
            
               while(num_to_remove <= 0){
        cout<<"Illegal move"<<endl;
        cout<<"Re-enter the number of matchsticks you would like to remove."<<endl;
        cin>>num_to_remove;
    }
     
             while(num_to_remove>pile_b){
                cout<<"Illegal Move"<<endl;
                cout<<"Re-enter the number of matchsticks you would like to remove."<<endl;
                cin>>num_to_remove;
            }
            }

 return;   
}

bool Is_Game_Over(int pile_a, int pile_b){
    
    if(pile_a == 0 && pile_b == 0){
        return true;
    }
    else{
        return false;
    }
  
}

void Process_Move(int & pile_a, int & pile_b, char pile,int num_to_remove){
    if(pile == 'a'){
    pile_a = pile_a - num_to_remove;
    }
    else if(pile== 'b'){
        pile_b = pile_b - num_to_remove;
    }
   
    return ;
}

