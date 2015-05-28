#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <stdlib.h>
//#include<string>
//#include<vector>
using namespace std;

struct kino
{
	char cinema[30];
	char film[30];
	int time[2];
	int coast;
};

void getData(kino *item, int N)
{
	cin.ignore();
	for (int i = 0; i < N; i++)
	{
		cin.ignore();
		//cout << "\n";
		cout << "cinema: ";
		cin.getline(item[i].cinema,30);
		cout << "film: ";
		cin.getline(item[i].film,30);
		cout << "time: ";
		cin >> item[i].time[0]; cin.ignore();
		cin >> item[i].time[1]; cin.ignore();		
		cout << "coast: ";
		cin >> item[i].coast;
	}
}

void showData(kino *item, int N)
{
	for (int i = 0; i < N; i++)
	{
		//cout << "seans " << i + 1 << endl;
		cout << "cinema: " << item[i].cinema << endl;
		cout << "film: " << item[i].film << endl;
		cout << "time: " << item[i].time[0] << ":" << item[i].time[1] << endl;
		cout << "coast: " << item[i].coast << endl;
	}
}

int main()
{
	int N, C, len;
	char str[1000], S, A;
	cout << "Press S to show seanses, press A to add seanses: ";
	cin >> S;
	if (S == 'S')
	{
		FILE *fin = fopen("C:\\text.txt", "r");
		if (fin == NULL){ return 0; }
		do
		{

			fgets(str, 1000, fin);
			cout << str;
			/*len = strlen(str);
			for (int i = 0; i < len; i++)
			{*/
		} while (!feof(fin));
	}
	else if (S == 'A')
	{
		cout << "Number of seanses: ";
		cin >> N;
		//cout << "C:";
		//cin >> C;
		kino *item = new kino[N];
		getData(item, N);

		/*do
		{
		getData(item, N);
		cout << "Do you want to add new sean? (y/n)";
		cin >> y;

		} while (y == 'y');*/
		/*cout << "Do you want to see all seans? (y/n)";
		cin >> y;
		if (y == 'y')
		{*/
		showData(item, N);
		//}
		delete[]item;
	}
	system("pause");
	return 0;
}
