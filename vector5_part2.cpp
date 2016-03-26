#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
 
int main()
{
    int arraySize = 0;
    cout << "������� ������ �������: ";
    cin >> arraySize;
    vector<int> array(arraySize);
 
    cout << "������� �������� �������: ";
    for(int i = 0; i < array.size(); i++) {
        cin >> array[i];
    }
 
    cout << "\n��������� ������: ";
    if (!array.empty()) { // ���� ������ �� ����
        // ����� �� ����� ��������� �������
        copy( array.begin(), array.end(), ostream_iterator<int>(cout," ") );
    }
    cout << "\n���������� ��������� �������: " << array.size();
 
    vector<int> array2 = array; // �������� ��� �������� array ������� array2
    cout << "\n�������� ������� ������� (����������� �� �������): ";
    copy( array2.begin(), array2.end(), ostream_iterator<int>(cout," ") );
 
    cout << "\n������ ������� ������� array2: " << array2.front() << endl;
    cout << "��������� ������� ������� array2: " << array2.back() << endl;
 
    array.clear(); // ������ ��� �������� �������, array ������ ����
    array2.push_back(-11); // � ����� ������� array2 �������� ����� ������� (-11)
 
    cout << "������ array2 � ����� ��������� ���������: ";
    copy( array2.begin(), array2.end(), ostream_iterator<int>(cout," ") );
    return 0;
}