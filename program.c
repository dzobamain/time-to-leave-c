#include <ncurses.h>

#include "program.h"

int Program() 
{
    initscr();
    noecho();
    cbreak();
    keypad(stdscr, TRUE);
    clear();

    char choice = getch();

    endwin();
    return choice;
}