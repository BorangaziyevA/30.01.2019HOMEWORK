#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<locale.h>

using namespace std;

bool chislo(int x)
{
	if (x % 2 == 0)
	{
		return 1;
	}
	else if (x % 2 == 1) return 0;
}
bool znak(char x)
{
	if (x == '!' || x == ',' || x == '.' || x == ':' || x == ';' || x == '?' || x == '-')
	{
		return 1;
	}
	else return 0;
}

int main()
{
	setlocale(LC_ALL, "");
	int x, flag = 0, task;
	char y;

	do
	{
		system("cls");

		cout << "������� ����� �������:";
		cin >> task;

		switch (task)
		{
		case 1:
			cout << "������� ����� ��� ��������:";
			cin >> x;

			cout << chislo(x) << endl; //������ �������
			break;
		case 2:
			cout << "������� ���� ��� ��������:";
			cin >> y;

			cout << znak(y) << endl; //������ �������
		}

	cout << "������ ����������?1/0";
	cin >> flag;

	} while (flag == 1);
}