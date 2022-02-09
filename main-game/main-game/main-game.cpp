#include <iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#include <string>
#include <windows.h>


using namespace std;


#define KEY_UP 72
#define KEY_DOWN 80
#define RED

void ClearArea() {
    system("CLS");
}

int main() {
    int year;
    int c = 0;
    int p = 0;
    string options[2] = { "-----> Edit", "-----> Restart" };
    char ans;

    cout << "Enter the year here -----> ";
    cin >> year;

    if (year > 0) {

        system("CLS");
        cout << "Year: " << year << endl;
        cout << "fdf" << endl;/*tuka shte e grey code funkciqta*/


        cout << endl;
        cout << endl;
        cout << endl;



        if (year == 1492 || year == 1346 || year == 1914 || year == 1939 || year == 1945 || year == 1957) {
            cout << "So there is your year:" << year << endl;

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
                cout << "1945 ?tomic bombs in Hiroshima and Nagasaki" << endl;
            }

            if (year == 1957) {
                cout << "1957 The first living thing in spacea" << endl;
            }

        }


    }