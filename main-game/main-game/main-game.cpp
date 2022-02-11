
#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#include <string>
#include <windows.h>
#include<math.h>


using namespace std;


#define KEY_UP 72
#define KEY_DOWN 80


void ClearArea() {
    system("CLS");
}





int main() {

    int year;
    int c = 0;
    int p = 0;
    
    int a[10], n, i;

    long long binary, y, b, k = 0, gray = 0;

    string options[2] = { "-----> Edit", "-----> Restart" };
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
                cout << "1945 ?tomic bombs in Hiroshima and Nagasaki" << endl;
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


            while (1) {
                c = 0;
                switch ((c = _getch())) {


                case KEY_UP:
                    cout << endl << "Edit" << endl;//key up
                    break;

                case KEY_DOWN:
                    cout << endl << "Restart" << endl;   // key down
                    break;
                }
            }


        }
        else {

            cout << endl;

            cout << "Ok, thank you for using our program <3" << endl;
            Sleep(3000);
        }

    }

}