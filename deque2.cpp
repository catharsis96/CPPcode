#include <iostream>
#include <deque>        // ���������� ������������ ���� �����
#include <iterator>     // ��������� ����������
#include <string>       // ������������ ���� ��� ������ �� �������� ���� string
using namespace std;

int main()
{
	deque<string> myDeque;     // ������� ������ ��� ���� string
	myDeque.push_back(string("Winter is")); // �������� � ��� ���� ������� ���� string
	cout << "���������� ��������� � ����: " << myDeque.size() << endl;

	myDeque.push_front("Game of Thrones:"); // �������� � ������ ���� ��� ���� �������
	myDeque.push_back("coming!");           // �������� � ����� ���� ������� "coming!"
	cout << "���������� ��������� � ���� ����������, ������ ��� = " << myDeque.size() << endl;

	cout << "\n��������� ���: ";
	if (!myDeque.empty()) { // ���� ��� �� ����
							// ����� �� ����� ��������� ����
		copy(myDeque.begin(), myDeque.end(), ostream_iterator<string>(cout, " ")); // ����� �� ����� ��������� ����
	}

	myDeque.pop_front(); // ������� ������ �������
	myDeque.pop_back(); // ������� ������ �������
	myDeque.resize(6, "empty"); // ����������� ������ ���� �� 6 ���������, ����� �������� ����������� ������ "empty"

	cout << "\n���� ������� ������ � ��������� �������� ����, ��� ��� ��������: ";
	for (int i = 0; i < myDeque.size(); i++) {
		cout << myDeque[i] << " ";
	}
	return 0;
}