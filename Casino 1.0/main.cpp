#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

void showBalance(int balance){
    system("cls");
    cout << "Your balance: " << balance << endl;
}

int main()
{
    system("cls");
    srand(time(NULL));
    int num;

    int balance;
    int bet;

    cout << "Enter you money: "; cin >> balance;
    beting:

    showBalance(balance);
    cout << "Put your bet: "; cin >> bet;

    int random = rand() % 10 + 1;

    if (bet > balance or bet < 0) {
        cout << "Error" << endl;
        cout << "Try again: ";
        goto beting;
    }

    cout << "Choose a number (from 1 to 10): "; cin >> num;
    if (num == random){
        balance += bet;
        showBalance(balance);
        cout << "Congratilation, you won " << bet << endl;
    }
    else{
        balance -= bet;
        showBalance(balance);
        cout << "You lose, try again (correct answer was " << random << ")" << endl;
    }

    if(balance == 0){
        cout << "Your muney is end!!!";
        return 0;
    }

    cout << "Do you want to play again? \n1. Yes\n2. No\n" << endl; cin >> num;
    if (num == 1) goto beting;
    else if (num == 2) return 0;
}
