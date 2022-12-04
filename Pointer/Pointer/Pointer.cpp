

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    double x = 2;
    double* pointer;
    pointer = &x;
    cout << "pointer = " << pointer << endl;
    cout << "*pointer = " << *pointer << endl;
    *pointer = 56.78;
    cout << "x = " << x << endl<<endl;

    int array[3][2] = { {1,2}, {3,4}, {5,6} };
    int rows = sizeof(array) / sizeof(array[0]);
    int col = sizeof(array[0]) / sizeof(array[0][0]);
    int* ending = array[0] + rows * col - 1;

    for (int* pointerarray = array[0], i = 1; pointerarray <= ending; pointerarray++, i++) {
        cout << *pointerarray << " ";
        if (i % 2 == 0) cout << "\n";
    }

    int z = 5;
    int* const pointerz = &z;
    cout << "\n" << pointerz << " = " << *pointerz << endl;
    *pointerz = 3;
    cout << pointerz << " = " << *pointerz << endl;
    cout << "z = " << z << endl;
    //pointerz = &y;//ошибка
}

 