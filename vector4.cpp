#include <iostream>
#include <vector>
#include <iterator> // ������������ ���� ����������
using namespace std;
 
int main()
{
    vector<int> array1; // ������� ������ ������
    // ��������� � ����� ������� array1 �������� 4, 3, 1
    array1.insert(array1.end(), 4);
    array1.insert(array1.end(), 3);
    array1.insert(array1.end(), 1);
    // ����� �� ����� ��������� �������
    copy( array1.begin(),   // �������� ������ �������
          array1.end(),     // �������� ����� �������
          ostream_iterator<int>(cout," ")   //�������� ������ ������
        );
    return 0;
}