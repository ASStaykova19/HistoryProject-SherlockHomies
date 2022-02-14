#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
#include "program.h"

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
	outputPosition(39, 2);;
	cout << "Instructions" ;
	outputPosition(2, 10);
	cout << "1.Navigation through the program is made by pressing the W and S buttons.";
	outputPosition(2, 12);
	cout << "2.Enter the year using the keypad";
	outputPosition(2, 14);
	cout << "3.If you want to see binary and Gray code type Y";
	outputPosition(2, 16);
	cout << "4.If you want to continue editing, press Y again";
	outputPosition(2, 18);
	cout << "5.To work with editing, type the number of the option and press enter";

}
void rules()
{
	char key;
	bool exitStatement = true;

	do
	{
		printOutRules();

		outputPosition(70, 33);
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
		outputPosition(41, 14);
		color(colorNumber[0]);
		cout << "S t a r t"<<endl;
		
		

		outputPosition(41, 16);
		color(colorNumber[1]);
		cout << "H e l p"<<endl;

		outputPosition(41, 18);
		color(colorNumber[2]);
		cout << "C l o s e";




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



		outputPosition(6, 7);
		color(colorNumber[3]);
		cout << "/\\                                                                         /\\ " << endl;
		outputPosition(0, 8);
		color(colorNumber[3]);
		cout << "     |  |                                                                       |  |" << endl;
		outputPosition(0, 9);
		color(colorNumber[3]);
		cout << "    /----\\                                                                     /----\\" << endl;
		outputPosition(0, 10);
		color(colorNumber[3]);
		cout << "   [______]                                                                   [______]" << endl;
		outputPosition(0, 11);
		color(colorNumber[3]);
		cout << "    |    |         _____                                         _____         |    |" << endl;
		outputPosition(0, 12);
		color(colorNumber[3]);
		cout << "    |[]  |        [     ]                                       [     ]        |  []|" << endl;
		outputPosition(0, 13);
		color(colorNumber[3]);
		cout << "    |    |       [_______][ ][ ][ ][                 ][ ][ ][ ][_______]       |    |" << endl;
		outputPosition(0, 15);
		color(colorNumber[3]);
		cout << "    |    [ ][ ][ ]|     |  ,--------                 --------,  |     |[ ][ ][ ]    |" << endl;
		outputPosition(0, 17);
		color(colorNumber[3]);
		cout << "    |             |     |/'    ____.                 .____    '\\|     |             |" << endl;
		outputPosition(0, 19);
		color(colorNumber[3]);
		cout << "     \\  []        |     |    /'    |                 |    '\\    |     |         [] /" << endl;
		outputPosition(0, 20);
		color(colorNumber[3]);
		cout << "      |      []   |     |   |o     |                 |     o|   |     |  []       |" << endl;
		outputPosition(0, 21);
		color(colorNumber[3]);
		cout << "      |           |  _  |   |     _|                 |_     |   |  _  |           |" << endl;
		outputPosition(0, 22);
		color(colorNumber[3]);
		cout << "      |   []      | (_) |   |    (_|                 |_)    |   | (_) |       []  |" << endl;
		outputPosition(0, 23);
		color(colorNumber[3]);
		cout << "      |           |     |   |     (|                 |)     |   |     |           |" << endl;
		outputPosition(0, 24);
		color(colorNumber[3]);
		cout << "      |           |     |   |      |                 |      |   |     |           |" << endl;
		outputPosition(0, 25);
		color(colorNumber[3]);
		cout << "    /''           |     |   |o     |                 |     o|   |     |           ''\\" << endl;
		outputPosition(0, 26);
		color(colorNumber[3]);
		cout << "   [_____________[_______]--'------'                 '------'--[_______]_____________]" << endl;
	




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
				mainGame();

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
