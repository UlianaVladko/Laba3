
#include <iostream>
using namespace std;

void separator() {
    cout << "---------------------" << endl;
}

void function1(int* begin, int* end, int* arr, int size, int* summ) {

    for (int* p = begin; p < end; p++)
        cout << *p << " ";

    for (int i = 0; i < size; i++)
    {
        *summ += *(arr + i);
    }
    cout << "\nСумма всех элементов массива: = " << *summ << endl;
}

typedef float (*operation_p)(float, float);

float add(float x, float y) {
    return x + y;
}

float sub(float x, float y) {
    return x - y ;
}

operation_p function2(char z) {
    if (z == '+') return add;
    if (z == '-') return sub;    
};

float* createPtr(float value)
{
    float* ptr = new float(value);
    return ptr;
}
void usePtr()
{
    float* p1 = createPtr(10213.54);
    printf("%.2f", *p1);            //10213.54
    delete p1;              // объект надо освободить
}

int main(){
    setlocale(LC_ALL, "");
    
    const int size = 5;
    int arr[]= { 2,3,7,43,4 };
    int summ = 0;
    int* psumm = &summ;    
    
    int* parr = &arr[0];
    function1(begin(arr), end(arr),parr, size, psumm);   

    separator();

    cout<<"Создайте 2 функции, принимающих 2 параметра и возвращающих их сумму и их разность соответственно"<<endl<<endl;

    float x = rand();
    float y = rand();
    cout << "x = " << x << endl;
    cout << "y = " << y << endl<<endl;
    cout << add(x, y) << endl;
    cout<<sub(x, y)<<endl;

    separator();
    cout << "Созданная функция должна возвращать указатель на одну из двух функций (суммы или разности) в зависимости от значения переданного char" << endl << endl;

    
    operation_p operation;
    if ((operation = function2('+'))) {
        cout << operation(x,y) << endl;
    }
    if ((operation = function2('-'))) {
        cout << operation(x,y) << endl;
    }
    
    separator();
    cout << "Создайте динамический указатель типа float" << endl << endl;

    usePtr();    
}