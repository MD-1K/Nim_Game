#include<iostream>

using namespace std;

void Setup_Initial_Piles(int & pile_a, int & pile_b);

void Display_Game_State(int pile_a, int pile_b, int cur_turn);

void Get_Move(int pile_a, int pile_b, int cur_turn, char & pile_chosen,  int & num_to_remove);

bool Is_Game_Over(int pile_a, int pile_b);

void Process_Move(int & pile_a, int & pile_b, char pile,int num_to_remove);

