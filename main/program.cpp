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

    if (year < 0) {
        cout << "You have entered an invalid input! Please try again!" << endl;
        cout << endl;
        cout << "Plase, enter the year you want to learn about: ";
        cin >> year;
    }

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