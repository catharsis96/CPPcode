#include <iostream>
#include <queue>        // ���������� ������������ ���� �������
using namespace std;

int main()
{
	priority_queue<float> myPrQueue;   // ������� ������ ������������ ������� ���� float

		 // ������� � ������� ��������� ��������� ���� float
	myPrQueue.push(12.45);
	myPrQueue.push(6.93);
	myPrQueue.push(-0.1);
	myPrQueue.push(26.93);
	myPrQueue.push(-3.03);

	cout << "���������� ��������� � �������: " << myPrQueue.size() << endl;
	cout << "������� ��������� � ������������ �������: ";
	
	// ��������� �������� ������� �� ������, � ������� �� ����������
	/* ����� �� ����� ������� ������� �������� �������, 
	����� ���� ��� ������ ������� � ������� ��� ������� �� �����, 
	�� ��������� �� ������� ������� pop()*/
	while (!myPrQueue.empty()) {
		cout << myPrQueue.top() << " ";
		myPrQueue.pop();
	}
	return 0;
	/*� ������������ �������� ��� ������� front(), back(). 
	���� ���� ����� top(), ������� ���������� ������ front().*/
}