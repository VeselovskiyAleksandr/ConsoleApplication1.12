// ConsoleApplication1.12.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 12. Задача 1. Время в пути.

#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string departureTime, arrivalTime;
	int hourOne, hourTwo, minuteOne, minuteTwo, trevalTime, i;
	bool timeOne, timeTwo;
	cout << "\nВведите время отправления поезда в формате HH:MM ";
	cin >> departureTime;
	hourOne = 10 *( departureTime[0]-'0') + departureTime[1]-'0';
	minuteOne = 10 *( departureTime[3]-'0') + departureTime[4]-'0';

			for (i = 0; i < 5; i++) {
				if((i==2&& departureTime[2] == ':')|| (i != 2 &&( departureTime[i] >='0' &&
					departureTime[i] <'9'))) {
					timeOne = true;
				}
				else {
					timeOne = false;
				}
			}
	
	cout << "\nВведите время прибытия поезда в формате HH:MM ";
	cin>> arrivalTime;
     hourTwo = 10 *( arrivalTime[0]-'0') + arrivalTime[1]-'0';
	minuteTwo = 10 *( arrivalTime[3]-'0') + arrivalTime[4]-'0';
	
		for (i = 0; i < 5; i++) {
			if ((i == 2 && arrivalTime[2] == ':') ||
				(i != 2 && (arrivalTime[i] >= '0' && arrivalTime[i] < '9'))) {
                	timeTwo = true;
			}
			else {
				timeTwo = false;
			}
		}
	if ((timeOne&&timeTwo)&&(hourTwo < 24) &&( minuteOne < 60)&&(arrivalTime.length() == 5)&&(hourOne < 24)&&
		(minuteOne < 60) &&( departureTime.length() == 5)) {
		if (hourTwo > hourOne) {
			trevalTime = 60 * hourTwo + minuteTwo - 60 * hourOne - minuteOne;
		}
		else{
			trevalTime = 60 * hourTwo + minuteTwo + (24 * 60 - 60 * hourOne - minuteOne);
		}
		cout << "\nВремя в пути составило " << trevalTime / 60 << " часов " << trevalTime % 60 << " минут";
		}
		else  {
			cout << "\nУкажите правильно время.";
		}
	}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
