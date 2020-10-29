#include <iostream>

using namespace std;

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}}; // stores state of game board


void drawBoard(char turn) 
{                                                                 //example
	cout<<board[0][0]<<"|"<<board[0][1]<<"|"<<board[0][2]<<"\n";    //x|x|o
	cout<<"-"<<"+"<<"-"<<"+"<<"-"<<"\n";                            //-+-+-
	cout<<board[1][0]<<"|"<<board[1][1]<<"|"<<board[1][2]<<"\n";    // |x|x
	cout<<"-"<<"+"<<"-"<<"+"<<"-"<<"\n";                            //-+-+-
	cout<<board[2][0]<<"|"<<board[2][1]<<"|"<<board[2][2]<<"\n";    //x|o|o
	cout<<turn<<"'s turn."<<"\n";                                   //o's turn.
	cout<<"1 2 3\n4 5 6\n7 8 9\n";                                  //1 2 3
}                                                                 //4 5 6
                                                                  //7 8 9


int main(int argc, char** argv)
{
  return 0;
}
