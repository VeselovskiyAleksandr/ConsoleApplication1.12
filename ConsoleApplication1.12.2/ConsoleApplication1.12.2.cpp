// ConsoleApplication1.12.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 12. Задача 2. Быки и коровы.

#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string numberOne, numberTwo, str, s;
	int bools = 0, cows = 0, i, j, k = 0;
	bool correct;
	cout << "\nВведите задуманное четырёхзначное число ";
	cin >> numberOne;

	for (i = 0; i < 4; i++) {
		if ((numberOne[i] < '0') || (numberOne[i] > '9') || (numberOne.length() != 4)) {
			correct = false;
			cout << "\nЗадумайте правильно число. "; break;
		}
		else {
			correct = true;

		}
	}

	while ((bools < 4) && correct) {
		cout << "\nВведите второе четырёхзначное число ";
		cin >> numberTwo;
		for (j = 0; j < 4; j++) {

			if ((numberTwo[j] < '0') || (numberTwo[j] > '9') || (numberTwo.length() != 4)) {
				correct = false;
				cout << "\nУкажите правильно  число. "; break;
			}
			else {
				correct = true;

			}
		}
		str = numberOne; s = numberTwo;
		if (correct) {
			int countCowsOne = 0, countCowsTwo = 0;
			cows = 0; bools = 0;
			for (i = 0; i < 4; i++) {


				for (j = 0; j < 4; j++) {

					if((i==j)&&(numberOne[i] == numberTwo[j])) {
						bools++;
					}
					else if ((i != j) && (numberTwo[j] == numberOne[i])) {
						for (k = i; k < 4; k++) { 
							if (str[k] == numberTwo[j]) {
								countCowsOne++;
	   					    }
						}
						for (k = j; k < 4; k++) {
							if (s[k] == numberTwo[j]) {
								countCowsTwo++;
							}
						}
						if (((countCowsOne>1)|| (countCowsTwo>1))&&(countCowsOne!= countCowsTwo)){
							
						}
						else {
							cows++;
						}
						countCowsOne=0;  countCowsTwo = 0;
					}
				}
					if (bools == 4) {
						cout << "\n             ПОЗДРАВЛЯЕМ!";
						cout << "\n           Вы угадали число."; break;
					}
				}

				if (bools < 4) {
					cout << "\nВ Вашем числе " << bools << " Бык и " << cows << " корова.";
				}
			}
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
	