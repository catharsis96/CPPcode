#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> array1(3);
    // �������������� �������� ������� array1
    array1[0] = 4;
    array1[1] = 2;
    array1[2] = 1;
    vector<int> array2(3);
    // �������������� �������� ������� array2
    array2[0] = 4;
    array2[1] = 2;
    array2[2] = 1;
    // ���������� �������
    if (array1 == array2) {
        cout << "array1 == array2" << endl;
    }
    return 0;
}