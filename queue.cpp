#include <iostream>
#include <queue>        // ���������� ������������ ���� �������
#include <string>       // ������������ ���� ��� ������ �� �������� ���� string
using namespace std;

int main()
{
	queue<string> myQueue;     // ������� ������ ������� ���� string

	 // �������� � ������� ��������� ��������� ���� string
	myQueue.push("No pain ");
	myQueue.push("- no gain");
	setlocale(LC_ALL, "rus");
	cout << "���������� ��������� � �������: " << myQueue.size() << endl;
	cout << "\n��� ���: " << myQueue.front() << myQueue.back();

	myQueue.pop(); // ������� ���� ������� � �������
	cout << "\n������ � ������� ������� ���� �������: " << myQueue.front();
	return 0;
}