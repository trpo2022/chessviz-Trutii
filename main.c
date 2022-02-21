#include <stdio.h>
#define chess_size 8
void printChess()
{
	char Desk[8][8]=
	{"rnbqkbnr",
	"pppppppp",
	"        ",
	"        ",
	"        ",
	"        ",
	"PPPPPPPP",
	"RNBQKBNR"};
	for (int i=0;i<chess_size;i++)
		for (int j=0; j<chess_size;j++)
			printf("%c",Desk[i][j]);
}

int main()
{
    printChess();
    return 0;
}
