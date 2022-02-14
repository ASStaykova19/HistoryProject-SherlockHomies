#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#include <string>
#include <windows.h>
#include<math.h>
#include "program.h"

using namespace std;



struct node {
    int number;
    node* next;
};

bool isEmpty(node* head) {
    if (head == NULL) {
        return true;
    }
    else {
        return false;
    }
}




char menu() {
    char choice;
    cout << "Add events" << endl;
    cout << "1. Add an event" << endl;
    cout << "2. Remove an event" << endl;
    cout << "3. Show the list of the events" << endl;
    cout << "4. Exit" << endl;

    cin >> choice;
    return choice;
}



void insertAsFirstElement(node* head, node*& last, int number) {
    node* temp = new node;
    temp->number = number;
    temp->next = NULL;
    head = temp;
    last = temp;
}

void insert(node* head, node*& last, int number) {
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

void remove(node* head, node*& last) {
    if (isEmpty(head)) {
        cout << "The list is already empty" << endl;
    }
    else if (head == last) {
        delete head;
        head == NULL;
        last == NULL;
    }
    else {
        node* temp = head;
        head = head->next;
        delete temp;
    }
}

void showList(node* current) {
    if (isEmpty(current)) {
        cout << "The list is empty" << endl;
    }
    else {
        cout << "The list contains: " << endl;
        while (current != NULL) {
            cout << current->number << endl;
            current = current->next;
        }
    }
}

void ClearArea() {
    system("CLS");
}




void mainGame() {

    int year;
    int c = 0;
    int p = 0;

    node* head = NULL;
    node* last = NULL;
    char choice;
    int number;

    int a[10], n, i;

    long long binary, y, b, k = 0, gray = 0;


    char ans1, ans2;



    cout << "Enter the year here -----> ";
    cin >> year;
    n = year;






    if (year > 0) {

        system("CLS");
        cout << "Year: " << year << endl;


        cout << endl;



        if (year == 1492 || year == 1346 || year == 1914 || year == 1939 || year == 1945 || year == 1957) {
            cout << "So there is your year:" << year << endl;
            cout << endl;

            if (year == 1492) {
                cout << "In 1492, Christopher Columbus discovered America" << endl;
            }

            if (year == 1346) {
                cout << "1346-1353 devastating plague epidemic / black death" << endl;
            }

            if (year == 1914) {
                cout << "1914-1918 World War I" << endl;
            }

            if (year == 1939) {
                cout << "1939-1945 World War II" << endl;
            }

            if (year == 1945) {
                cout << "1945 Atomic bombs in Hiroshima and Nagasaki" << endl;
            }

            if (year == 1957) {
                cout << "1957 The first living thing in spacea" << endl;
            }

        }



        else if (year == 681 || year == 855 || year == 864 || year == 1762 || year == 1878 || year == 1870 || year == 1885) {
            cout << "So there is your year:" << year << endl;
            cout << endl;
            if (year == 681) {
                cout << "681 - The first Bulgarian state was created" << endl;
            }

            if (year == 855) {
                cout << "855 - Creation of the Slavic alphabet by Cyril and Methodius" << endl;
            }

            if (year == 864) {
                cout << "864 - Christianity is accepted as the official religion in Bulgaria" << endl;
            }

            if (year == 1762) {
                cout << "1762 - Paisii Hilendarski writes 'Slavo - Bulgarian History'" << endl;
            }

            if (year == 1878) {
                cout << "1878 - Bulgaria was liberated from the Ottoman Empire" << endl;
            }

            if (year == 1870) {
                cout << "1870 - Bulgaria won an independent Bulgarian church" << endl;
            }

            if (year == 1885) {
                cout << "1885 - The unification of Bulgaria and eastern Rumelia " << endl;
            }
        }



        else {
            cout << "No events have been added to this date" << endl;
        }


        cout << endl;
        cout << endl;
        cout << endl;


        cout << "Do you want to see binary and Gray code of the year   Y/N :  ";
        cin >> ans2;

        cout << endl;

        if (ans2 == 'Y' || ans2 == 'y') {




            for (i = 0; n > 0; i++) {
                a[i] = n % 2;
                n = n / 2;
            }
            cout << "Binary: ";
            for (i = i - 1; i >= 0; i--) {
                cout << a[i];
            }

            cout << endl;

            cout << "Enter the binary number: " << endl;
            cin >> binary;

            while (binary != 0) {

                y = binary % 10;
                binary = binary / 10;
                b = binary % 10;

                if ((y && !b) || (!y && b))
                    gray = gray + pow(10, k);
                k++;
            }

            cout << endl;
            cout << "Gray code: " << gray;

        }
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;



        cout << "Do you want to continue? Y/N    Answear:";
        cin >> ans1;

        if (ans1 == 'Y') {
            system("CLS");

            do {
                choice = menu();

                switch (choice) {
                case '1':
                    cout << "Please enter a number: ";
                    cin >> number;
                    insert(head, last, number);
                    break;

                case 2:
                    remove(head, last);
                    break;

                case 3:
                    showList(head);
                    break;

                case 4:
                    cout << "System exit" << endl;
                }

            } while (choice != '4');

        }
        else {

            cout << endl;

            cout << "Ok, thank you for using our program <3" << endl;
            Sleep(3000);
        }

    }

}