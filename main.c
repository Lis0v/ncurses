#include <stdio.h>
#include <ncurses.h>

void display(void)
{	
	initscr();

	char chiffre[10];
	char beruf[20];
	char sort[40];
	char zeit[40];
	char aufgaben[100];
	char alter[5];
	char beginn[20];
	char verdienst[20];
	char kontakt[50];

	char *parametry[9]={chiffre, beruf, sort, zeit, aufgaben, alter, beginn, verdienst, kontakt};

	char *index[9]={"ID-Chiffre", "Beruf", "Arbeitsort", "Arbeitszeit", "Aufgaben", "Alter", "Beginn", "Verdienst", "Kontakt"};

	for(int i=0;i<9;i++){
	mvprintw(i, 0, "%s: ", index[i]);
	scanw("%s", parametry[i]);
	}

	int k=10;

	mvprintw(9, 0, "--------------------------------");
	mvprintw(19, 0, "--------------------------------");

	for(int j=0;j<9;j++)
		mvprintw(k++, 0, "%s: %s", index[j], parametry[j]);

	refresh();
	getch();
	endwin();
}

int main()
{
	display();
	return 0;
}
