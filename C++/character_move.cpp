#include <Player.h>
#include <map.h>
#include <iostream>
void Movement(char key, char *player)
{
	char key = getch();
	do {
		switch (key)
		{
		case 'w': //UP
			if (*player != 'W') {
				*player = ' '; player -= 16; *player = 'P'; system("cls"); for (int y = 0; y < 10; y++) cout << Map[y] << endl; break;
			}
			else { for (int y = 0; y < 10; y++) cout << Map::Map[1][1] << endl; break; }
		case 'a': //LEFT
			if (*player != 'W') {
				*player = ' '; player -= 1; *player = 'P'; system("cls"); for (int y = 0; y < 10; y++) cout << Map[y] << endl; break;
			}
			else { for (int y = 0; y < 10; y++) cout << Map[y] << endl; break; }
		case 'd': //RIGHT
			if (*player != 'W') {
				*player = ' '; player += 1; *player = 'P'; system("cls"); for (int y = 0; y < 10; y++) cout << Map[y] << endl; break;
			}
			else { for (int y = 0; y < 10; y++) cout << Map[y] << endl; break; }
		case 's': //DOWN
			if (*player != 'W') {
				*player = ' '; player += 16; *player = 'P'; system("cls"); for (int y = 0; y < 10; y++) cout << Map[y] << endl; break;
			}
			else { for (int y = 0; y < 10; y++) cout << Map[y] << endl; break; }
		default: break;
		}
	} while (exit != 1);
