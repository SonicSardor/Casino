#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int main()
{
    system("cls");
    srand(time(NULL));
    int random = rand() % 10 + 1;
    int num;
    cout << "Sonni tanlang: "; cin >> num;
    if (num == random)
        cout << "Tabrikleyman siz to'g'ri toptingiz" << endl;
    else{
        cout << "No'tog'ri, qayat urinib kuring" << endl;
        cout << "To'gri son = " << random << endl;
    }
    cout << "Qayta urinib kurasizmi? \n1. Ha\n2. Yo'q" << endl; cin >> num;
    if (num == 1) return main();
    else if (num == 2) return 0;
}
