#include <stdio.h>
#include <ncurses.h>

int main()
{
	initscr();
	clear();
	noecho();
	cbreak();
	keypad(stdscr, true);

	int ch;
	ch = getch();
	
	int i=0;

	while(1)
	{
		mvprintw(i, 0, ">> ");

		if(ch == KEY_DOWN)
			++i;

		if(ch == KEY_UP)
			--i;

		refresh();
		getch();
	}
	endwin();
}
