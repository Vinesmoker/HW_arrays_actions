#include<iostream>
using namespace std;

void main()
{
    setlocale (LC_ALL, "Rus");

    // �� DEC � BIN
    int dec; int bin = 0; int buff = 1;
    cout << "������� ���������� �����: "; cin >> dec;
    while (dec)
    {
        bin += (dec % 2) * buff;
        buff *= 10;
        dec /= 2;
    }
    cout << bin << endl;
}