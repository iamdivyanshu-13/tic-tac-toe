#include<stdio.h>
char square[9]= {'0','1','2','3','4','5','6','7','8'};
int checkwin();
void drawboard();
int  repeat();
int main () {
	int player=1,i,choice,m=0;
	char flag;

	for(i=0; i<9; i++) {
		board(square[i]);
		player=(player%2)?1:2;
		printf("player %d enter a no;",player);

		scanf("%d",&choice);
		flag=(player==1)?'x':'0';

		if (choice==0&&square[0]=='0') {
			square[0]=flag;

		} else if (choice==1&&square[1]=='1') {
			square[1]=flag;

		} else if (choice==2&&square[2]=='2') {
			square[2]=flag;

		} else if (choice==3&&square[3]=='3') {
			square[3]=flag;

		} else if (choice==4&&square[4]=='4') {
			square[4]=flag;

		} else if (choice==5&&square[5]=='5') {
			square[5]=flag;

		} else if (choice==6&&square[6]=='6') {
			square[6]=flag;

		} else if (choice==7&&square[7]=='7') {
			square[7]=flag;

		} else if (choice==8&&square[8]=='8') {
			square[8]=flag;

		} else {
			printf("Invalid move\n");
			player--;

		}
		m=checkwin();

		if(m==1) {
			board(square[i]);
			printf("player %d win\n",player);
			break;
		}
		player++;

	}
	if(m==0) {
		printf("game draw");
	}



	return 0;
}

int checkwin() {
	if(square[0]==square[1]&&square[1]==square[2]) {
		return 1;
	} else if(square[3]==square[4]&&square[4]==square[5]) {
		return 1;
	} else if(square[6]==square[7]&&square[7]==square[8]) {
		return 1;
	} else if(square[0]==square[3]&&square[3]==square[6]) {
		return 1;
	} else if(square[1]==square[4]&&square[4]==square[7]) {
		return 1;
	} else if(square[2]==square[5]&&square[5]==square[8]) {
		return 1;
	} else if(square[0]==square[4]&&square[4]==square[8]) {
		return 1;
	} else if(square[2]==square[4]&&square[4]==square[6]) {
		return 1;
	} else if  (square[0] != '0' && square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8') {
		return 0;
	} else {
		return 0;
	}
}

int  board() {
	system("cls");
	printf("\n\nTic Tac Toe  Created By_Divyanshu#\n\n");

	printf("Player 1 (X)  -  Player 2 (O)\n\n");


	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c \n", square[0], square[1], square[2]);

	printf("_____|_____|_____\n");
	printf("     |     |     \n");

	printf("  %c  |  %c  |  %c \n", square[3], square[4], square[5]);

	printf("_____|_____|_____\n");
	printf("     |     |     \n");

	printf("  %c  |  %c  |  %c \n", square[6], square[7], square[8]);

	printf("     |     |     \n\n");
}

