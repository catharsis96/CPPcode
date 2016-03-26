#include <iostream>
#include <deque>        // ���������� ������������ ���� �����
#include <iterator>     // ��������� ����������
using namespace std;

int main()
{
	int dequeSize = 0;
	cout << "������� ������ ����: ";
	cin >> dequeSize;

	deque<char> myDeque(dequeSize);     // ������� ��� � ����������� ��� ���� ������

	cout << "������� �������� ����: ";
	// ��������� ��� � ����������
	for (int i = 0; i < myDeque.size(); i++) {
		cin >> myDeque[i];
	}

	cout << "\n��������� ���: ";
	if (!myDeque.empty()) { // ���� ��� �� ����
							// ����� �� ����� ��������� ����
		copy(myDeque.begin(), myDeque.end(), ostream_iterator<char>(cout, " ")); // ����� �� ����� ��������� ����
	}
	return 0;
}