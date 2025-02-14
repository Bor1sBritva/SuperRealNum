#include <iostream>
#include <string>
#include "LongDouble.h"
using namespace std;

int main() {
	LongDouble ch1;
	LongDouble ch2;
	LongDouble ch3;
	LongDouble res;
	int i = 3;
	double f = 2.015;

	string strnum;
	double realnum;
	setlocale(LC_ALL, "RUS");
	cout << "Здравствуйте! Вас приветствует тестовая программа\n";
	cout << "для проверки функциональности типа данных 'LongDouble'." << endl;
	cout << "Вам необходимо ввести с клавиатуры поочерёдно две сверхточные дроби:" << endl;
	cin >> strnum;
	cin >> realnum;

	ch1 = LongDouble(strnum); //Задание переменной из строки
	ch2 = LongDouble(realnum); //Задание переменной из базового типа 
	cout << endl << ch1 << endl;
	cout << ch2 << endl;
	res = ch1 / ch2;
	ch3 = ch1;

	cout << "\nОператор присваивания: " << ch3 << endl;

	cout << "\nАрифметика:" << endl;
	cout << "ТД + ТД:" << ch1 + ch2 << endl;
	cout << "ТД - ТД:" << ch1 - ch2 << endl;
	cout << "ТД * ТД:" << ch1 * ch2 << endl;
	cout << "ТД / ТД:" << res << endl;
	cout << "\nТД + БТД: int - " << ch1 + i << '\n' << "double - " << ch1 + f << endl;
	cout << "ТД - БТД: int - " << ch1 - i << '\n' << "double - " << ch1 - f << endl;
	cout << "ТД * БТД: int - " << ch1 * i << '\n' << "double - " << ch1 * f << endl;
	cout << "ТД / БТД: int - " << ch1 / i << '\n' << "double - " << ch1 / f << endl;

	cout << "\nАрифметика с накоплением:" << endl;
	cout << "+=:" << (ch1 += ch2) << endl;
	cout << "-=:" << (ch1 -= ch2) << endl;

	cout << "\nУнарные:" << endl;
	res = ++ch1;
	cout << "++val:" << res << endl;
	res = --ch1;
	cout << "--val:" << res << endl;
	res = ch1++;
	cout << "val++:" << res << endl;
	res = ch1--;
	cout << "val--:" << res << endl;

	cout << "\nЛогика:" << endl;
	cout << ch1 << " > " << ch2 << ": " << (ch1 >ch2) << endl;
	cout << ch1 << " < " << ch2 << ": " << (ch1 < ch2) << endl;
	cout << ch1 << " == " << ch2 << ": " << (ch1 == ch2) << endl;
	cout << ch1 << " != " << ch2 << ": " << (ch1 != ch2) << endl;

	return 0;
}