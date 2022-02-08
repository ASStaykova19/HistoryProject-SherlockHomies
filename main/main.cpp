#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;
// Initializing mazes' sizes for the different difficulties

void color(int color)
{
	// Change output's colors
	if (SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color))
	{
		return;
	}
	else {}
}

void outputPosition(int x, int y)
{
	// Set player's fixed position
	COORD position;
	position.X = x;
	position.Y = y;
	if (SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position))
	{

		return;
	}
	else {}
}

void printOutRules()
{
	// Print rules
}
void rules()
{
	char key;
	bool exitStatement = true;

	do
	{
		printOutRules();

		outputPosition(60, 23);
		color(14);
		cout << "BACK TO MAIN MENU"<<endl;

		key = _getch();

		// Go back to main menu 
		if (key == '\r')
		{
			exitStatement = false;

			system("CLS");
		}

	} while (exitStatement != false);

}



void mainMenu()
{
	int colorNumber[] = { 7, 7, 7, 7 };
	int counter = 1;
	char key;
	bool exitProgram = true;


	while (exitProgram != false)
	{
		// Main menu options
		outputPosition(43, 14);
		color(colorNumber[0]);
		cout << "Play"<<endl;
		
		outputPosition(43, 16);
		color(colorNumber[1]);
		cout << "Help"<<endl;

		outputPosition(43, 18);
		color(colorNumber[2]);
		cout << "Close";

		outputPosition(25, 3);
		color(colorNumber[3]); 
		cout << " ___, ,  _,    _   ,_   _,, ,  ___,   , _,"<<endl;
		outputPosition(25, 4);
		color(colorNumber[3]);
		cout << "' | |_|,/_,   '|\\  |_) /  |_|,' | \\  / /_," << endl;
		outputPosition(25, 5);
		color(colorNumber[3]);
		cout << "  |'| |'\\_     |-\\'| \\'\\_'| |  _|_,\\/`'\\_  " << endl;
		outputPosition(25, 6);
		color(colorNumber[3]);
		cout << "  ' ' `   `    '  `'  `  `' ` '    '     ` ";

		key = _getch();

		// Move up through the menu
		if (key == 'w' && (counter >= 2 && counter <= 5))
		{
			counter--;
		}
		// Move down through the menu
		if (key == 's' && (counter >= 1 && counter <= 2))
		{
			counter++;
		}
		// Select option
		if (key == '\r')
		{
			// Choosing mode option
			if (counter == 1)
			{
				system("CLS");

			}

			// Rules option
			if (counter == 2)
			{
				system("CLS");
				rules();
			}

			// Exit option
			if (counter == 3)
			{
				system("CLS");
				color(7);
				exit(-1);
			}
		}

		// Resset options' color 
		colorNumber[0] = 7;
		colorNumber[1] = 7;
		colorNumber[2] = 7;

		// Change option's color if it is selected
		if (counter == 1)
		{
			colorNumber[0] = 12;
		}
		if (counter == 2)
		{
			colorNumber[1] = 12;
		}
		if (counter == 3)
		{
			colorNumber[2] = 12;
		}
	}
}
int main()
{
	mainMenu();
	rules();
	printOutRules();
}
