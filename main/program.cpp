#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <windows.h>
#include <math.h>
using namespace std;

struct node {
    int number;
    node* next;
};

bool isEmpty(node* head) { //check if the list is empty
    if (head == NULL) {
        return true;
    }
    else {
        return false;
    }
}

char menu() { //edit menu
    char choice;
    cout << "Add events" << endl;
    cout << "1. Add an event" << endl;
    cout << "2. Remove an event" << endl;
    cout << "3. Show all events" << endl;
    cout << "4. Back to main menu" << endl;

    cin >> choice;
    return choice;
}

void ClearArea() { //clear console
    system("CLS");
}

void insertAsFirstElement(node* head, node*& last, int number) { //function to add 1st element
    node* temp = new node;
    temp->number = number;
    temp->next = NULL;
    head = temp;
    last = temp;
}

void insert(node* head, node*& last, int number) { // add elements
    if (isEmpty(head)) {

        insertAsFirstElement(head, last, number);

    }
    else {

        node* temp = new node;
        temp->number = number;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }

}

void remove(node* head, node*& last) {//remove elements

    if (head == last) {
        delete head;
        cout << "You succesfully deleted that year" << endl;
        cout << endl;
        cout << endl;

    }
    else {
        node* temp = head;
        head = head->next;
        delete temp;
        cout << "You succesfully deleted that year" << endl;
        cout << endl;
        cout << endl;
    }

}

void showList(node* current) {//show the list
    if (isEmpty(current)) {
        cout << "The list is empty" << endl;
        cout << endl;
        cout << endl;
    }
    else {
        cout << "The list contains: " << endl;
        while (current != NULL) {
            cout << current->number << endl;
            current = current->next;
        }

    }

}

void mainGame() {

    int year;

    node* head = NULL;
    node* last = NULL;
    char choice;
    int number;

    int arr[10], num, i;

    long long binary, a1, a2, k = 0, gray = 0;

    char ans1, ans2;

    cout << "Plase, enter the year you want to learn about: ";

    cin >> year;
    num = year;

    if (year > 0) {

        system("CLS");
        cout << "Year: " << year << endl;

        cout << endl;
        cout << "Еvents that happened in: " << year << endl;
        cout << endl;

        if (year == 1492 || year == 1346 || year == 1914 || year == 1939 || year == 1945 || year == 1957) {

            if (year == 1492) {
                cout << " - Christopher Columbus discovered America" << endl;
            }

            if (year == 1346) {
                cout << " - devastating plague epidemic / black death" << endl;
            }

            if (year == 1914) {
                cout << " - Beginning of the World War I" << endl;
            }

            if (year == 1939) {
                cout << " - Beginning of the World War II" << endl;
            }

            if (year == 1945) {
                cout << " - Atomic bombs in Hiroshima and Nagasaki" << endl;
            }

            if (year == 1957) {
                cout << " - The first living thing in spacea" << endl;
            }

        }

        else if (year == 681 || year == 855 || year == 864 || year == 1762 || year == 1878 || year == 1870 || year == 1885) {

            if (year == 681) {
                cout << " - The first Bulgarian state was created" << endl;
            }

            if (year == 855) {
                cout << " - Creation of the Slavic alphabet by Cyril and Methodius" << endl;
            }

            if (year == 864) {
                cout << " - Christianity is accepted as the official religion in Bulgaria" << endl;
            }

            if (year == 1762) {
                cout << " - Paisii Hilendarski writes 'Slavo - Bulgarian History'" << endl;
            }

            if (year == 1878) {
                cout << " - Bulgaria was liberated from the Ottoman Empire" << endl;
            }

            if (year == 1870) {
                cout << " - Bulgaria won an independent Bulgarian church" << endl;
            }

            if (year == 1885) {
                cout << " - The unification of Bulgaria and eastern Rumelia " << endl;
            }
        }

        else if (year <= 0) {
            cout << "No events have been added to this date" << endl;
        }
        else {
            cout << "No events have been added to this date" << endl;
        }

        cout << endl;
        cout << endl;
        cout << endl;

        cout << "Do you want to see binary and Gray code of the year?  Y/N :  ";
        cin >> ans2;
        cout << endl;

        if (ans2 == 'Y' || ans2 == 'y') {//gray code
            for (i = 0; num > 0; i++) {
                arr[i] = num % 2;
                num = num / 2;
            }

            cout << "Binary: ";

            for (i = i - 1; i >= 0; i--) {
                cout << arr[i];
            }
            cout << endl;

            cout << "Enter the binary number: " << endl;
            cin >> binary;
            while (binary != 0) {
                a1 = binary % 10;
                binary = binary / 10;
                a2 = binary % 10;

                if ((a1 && !a2) || (!a1 && a2))
                    gray = gray + pow(10, k);
                k++;
            }

            cout << endl;
            cout << "Gray code: " << gray;//gray code
        }

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;

        cout << "Do you want to continue?  Y/N    Answear: ";
        cin >> ans1;

        string addedYear;

        if (ans1 == 'Y' || ans1 == 'y') {
            system("CLS");

            do {//edit menu
                choice = menu();

                switch (choice) {
                case '1':
                    cout << "Please enter a new year: ";
                    cin >> number;

                    cout << "What happened this year? " << endl;
                    for (int i = 0; i < addedYear.length(); i++) {

                        cin >> addedYear[i];
                    }
                    cout << "You succesfully added this year: " << number;
                    system("CLS");
                    break;

                case '2':
                    cout << "Which year do you want to remove?  ";
                    cin >> number;
                    cout << endl;
                    head == last;
                    remove(head, last);
                    break;
                    system("CLS");

                case '3':
                    showList(head);
                    break;
                    system("CLS");

                case '4':
                    cout << "System exit" << endl;
                    system("CLS");
                }

            } while (choice != '4');

        }
        else {
            cout << endl;
            cout << "Ok, thank you for using our program <3" << endl;
            Sleep(6000);
        }
    }
}

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
    cout << "Instructions";
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
        cout << "BACK TO MAIN MENU" << endl;

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
        cout << "S t a r t" << endl;

        outputPosition(41, 16);
        color(colorNumber[1]);
        cout << "H e l p" << endl;

        outputPosition(41, 18);
        color(colorNumber[2]);
        cout << "C l o s e";


        outputPosition(25, 3);
        color(colorNumber[3]);
        cout << " ___, ,  _,    _   ,_   _,, ,  ___,   , _," << endl;
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
            // Start option
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
                cout << "Ok, thank you for using our program <3" << endl;
                Sleep(6000);
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