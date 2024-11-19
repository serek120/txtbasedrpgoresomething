#include <windows.h>
#include <cstdio>
#include <string>
#include "define.h"

using namespace std;

string g_szCHelp = {"Help", "help"};
string g_szCStat = {"Stats","stats"};
string g_szCQuit = { "Quit","quit" };

void ClearScreen() {
	#ifdef _WIN32
		system("cls");
	#else
	system("clear");
	#endif //_WIN32
}



void help() {
	print("list of all commands\n%s", g_szCHelp);
}

void stats() {
	int	iLife = 100;
	int iHunger = 100;

	print("Life = %d\nHunger = %d", iLife, iHunger);
}