#include <iostream>

using namespace std;

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}}; // stores state of game board

bool isItDraw();
bool isItVictory();
void drawBoard(char turn);


int main(int argc, char** argv)
{
  return 0;
}



void drawBoard(char turn)
{                                                                 	//example
	cout<<board[0][0]<<"|"<<board[0][1]<<"|"<<board[0][2]<<"\n";    //x|x|o
	cout<<"-"<<"+"<<"-"<<"+"<<"-"<<"\n";                            //-+-+-
	cout<<board[1][0]<<"|"<<board[1][1]<<"|"<<board[1][2]<<"\n";    // |x|x
	cout<<"-"<<"+"<<"-"<<"+"<<"-"<<"\n";                            //-+-+-
	cout<<board[2][0]<<"|"<<board[2][1]<<"|"<<board[2][2]<<"\n";    //x|o|o
	cout<<turn<<"'s turn."<<"\n";                                   //o's turn.
	cout<<"1 2 3\n4 5 6\n7 8 9\n";                                  //1 2 3
}    									//4 5 6
                                                                  	//7 8 9


bool isItDraw()
{
	if(board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' &&
	   board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' ' &&
	   board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ' && 
	   !isItVictory()) 							return true;
	else return false; 
}

bool isItVictory()
{
	//3 rows
	for(int i=0; i<3; i++) if(board[i][0]==board[i][1] && board[i][0]==board[i][2] && board[i][0] !=' ') return true;
	
	//3 columns
	for(int i=0; i<3; i++) if(board[0][i]==board[1][i] && board[0][i]==board[2][i] && board[0][i] !=' ') return true;
	
	//first diagonal
	if(board[0][0]==board[1][1] && board[0][0]==board[2][2] && board[0][0] !=' ') return true;      
	//secound diagonal
	else if(board[2][0]==board[1][1] && board[2][0]==board[0][2] && board[2][0] !=' ') return true; 
	
	else return false;
}

