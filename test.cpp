#include <iostream>
#include <ctime>
#include "Header.h"

using namespace std;

void matrixOutput();

void task1();

void menu();

int main()
{
    menu();
    A a;
    int menuNum;
    cin >> menuNum;
    while (menuNum) {
        system("CLS");
        if (menuNum == 0) {
            break;
        }
        switch (menuNum) {
        case 1:
            matrixOutput();
            task1();
            break;
        default:
            cout << "Unknown command" << endl;
            break;
        }
        system("CLS");
        menu();
        cin >> menuNum;
    }

    return 0;
}

const int SIZE = 17;
int a[SIZE][SIZE];

void menu() {
    char menu[2000] = { "Choose an option: \n"
         "0: Exit \n"
         "1: Task 1 \n"
         "2: Task 2 \n"
         "3: Task 3 \n"
    };
    cout << menu;
}

void matrixOutput() {
    srand(time(0));
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            a[i][j] = -10 + rand() % 21;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void task1() {
    cout << "________________________________" << endl;
    cout << "Task 1:" << endl;
    int summ = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (a[i][j] < 0) {
                for (int k = j + 1; k < SIZE; k++) {
                    summ += abs(a[i][k]);
                    j++;
                }
                cout << summ << endl;
                summ = 0;
            }
        }
    }
    system("pause");
}