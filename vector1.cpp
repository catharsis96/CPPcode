#include <iostream>
#include <vector> // ���������� ������ ��������
using namespace std;
int main()
{
    vector<int> myVector(10);   // ��������� ������ �������� � 10 ��������� � �������������� �� ������
    // ����� ��������� ������� �� �����
    for(int i = 0; i < myVector.size(); i++)
        cout << myVector[i] << ' ';
    return 0;
}