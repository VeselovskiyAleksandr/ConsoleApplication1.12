// ConsoleApplication1.12.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 12. Задача 3. Длинное вещественное число.

#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
		string number;
		int i, j, countNumber=0, countPoint=0 ;
	cout << "\nВведите вещественное число ";
	cin >> number;
	if ((number[0] == '-') || (number[0] == '.') || (number[0] >= '0' && number[0] <= '9')) {
		for (i = 0; i < number.length(); i++) {
			if (number[0] == '-') {
				j = 1;
			}
			else {
				j = 0;
			}
			if (number[i] == '.') {
				countPoint++;
			}
			else if (number[i] >= '0' && number[i] <= '9') {
				countNumber++;
			}
			if ((i == number.length() - 1)&&(countPoint<= 1)&&(countNumber== number.length()- countPoint-j))
			{
				cout << "\nЭта строка задаёт вещественное число корректно.";
			}
			else if(i == number.length() - 1) {
				cout << "\nЭта строка некорректно задаёт вещественное число.\n";
			}
		}
	}
        else {
		cout << "\nЭта строка некорректно задаёт вещественное число.\n";
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
