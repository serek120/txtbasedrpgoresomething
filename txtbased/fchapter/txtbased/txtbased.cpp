#include <iostream>
#include <string>
#include <cstdio>
#include <Windows.h>
#include "funch.h"
#include "define.h"

using namespace std;

int gamech1() {
	ClearScreen();
	print("-*Tutorial*-\nType Help or help to list all commands.\n");
	string szC;
	scan("%s" , &szC);
	if (szC == "Help" "help")
		help();
	scan("");
	return 0;
}


int gamestart() {

	print("Welcome in my RPG text-based game.\nType 1 to play.\nType 2 to exit.\n");
	int a;
	scan("%d", &a);
	if(a == 1)
		return gamech1();
	return 0;
}

int main() {
	return gamestart();
}