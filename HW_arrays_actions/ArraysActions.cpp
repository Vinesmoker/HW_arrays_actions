#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = { 1, 2, 3, 4, 5 };

	cout << "������� �������� ��������� �������: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	cout << "��� �������� �������: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << " / " << arr[i] << " / ";
	}
	cout << "\n\n";
	
	cout << "�������� ������� � �������� �������: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << " / " << arr[i] << " / ";
	}
	cout << "\n\n";

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� �������: " << sum << "\n\n";

	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "������� �������������� ����� � �������: " << (double)sum / SIZE << "\n\n";
	
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "���������� ����� � �������: " << min << endl;
	cout << "���������� ����� � �������: " << max << endl;
}