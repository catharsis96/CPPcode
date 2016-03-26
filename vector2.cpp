#include <iostream>
#include <vector> //   
using namespace std;
int main()
{
    vector<int> myVector1(10);
    //     
	setlocale(LC_ALL, "rus");
    cout << " : ";
    for(int i = 0; i < myVector1.size(); i++) {
        myVector1[i] = i;
        cout << myVector1[i] << ' ';
    }
    cout << "\n : ";
    vector<int> myVector2(myVector1); //    ,  - 
    for(int i = 0; i < myVector2.size(); i++) {
        myVector2[i] = i;
        cout << myVector2[i] << ' ';
    }
    return 0;
}