#include <iostream>
#include <deque>        // подключаем заголовочный файл деков
#include <iterator>     // заголовок итераторов
using namespace std;

int main()
{
	int dequeSize = 0;
	cout << "¬ведите размер дека: ";
	cin >> dequeSize;

	deque<char> myDeque(dequeSize);     // создаем дек и резервируем дл€ него пам€ть

	cout << "¬ведите элементы дека: ";
	// заполн€ем дек с клавиатуры
	for (int i = 0; i < myDeque.size(); i++) {
		cin >> myDeque[i];
	}

	cout << "\n¬веденный дек: ";
	if (!myDeque.empty()) { // если дек не пуст
							// вывод на экран элементов дека
		copy(myDeque.begin(), myDeque.end(), ostream_iterator<char>(cout, " ")); // вывод на экран элементов дека
	}
	return 0;
}