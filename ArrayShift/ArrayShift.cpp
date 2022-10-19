#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	cout << "\n\n";
	int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < n; i++)
	{
		cout << "\t" << arr[i];
	}
	cout << "\n\n";
	int num_of_shifts; int cycle;
	cout << "Введите количество сдвигов массива: "; cin >> num_of_shifts;
	cout << "Введите количество циклов сдвига массива: "; cin >> cycle;
	cout << "\n" << "Вывод массива справа налево: " << endl;
	for (int i = 0; i < cycle; i++)
	{
		for (int i = 0; i < num_of_shifts; i++)
		{
			int buff = arr[0];
			for (int i = 0; i < n; i++)
			{
				arr[i] = arr[i + 1];
			}
			arr[n - 1] = buff;
		}
		cout << endl;
		for (int i = 0; i < n; i++)
		{
			cout << "\t" << arr[i];
		}
	}
	cout << endl << "Вывод массива слева направо: " << endl;
	for (int i = 0; i < cycle; i++)
	{
		for (int i = 0; i < num_of_shifts; i++)
		{
			int buff = arr[n - 1];
			for (int i = n - 2; i >= 0; i--)
			{
				arr[i + 1] = arr[i];
			}
			arr[0] = buff;
		}
		for (int i = 0; i < n; i++)
		{
			cout << "\t" << arr[i];
		}
		cout << endl;
	}
}