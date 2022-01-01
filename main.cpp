#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;
// create prototype for fct
double AddNumbers(double num1, double num2);
// we receive a pointer
// address of memory
void AssignAge(int* pAge);
void DoubleArray(int *arr, int size);
int main(int argc, char** argv) {
    printf("%.1f + %.1f = %.1f", 5.0, 4.0,
           AddNumbers(5,4));
    cout << endl;
    int age = 43;
    // to pass addresses use & reference operator
    AssignAge(&age);
    cout << age << endl;

    int age2 = 43;
    int* pAge2 = NULL; // good practice to assign poitners to Null
    // take addres of age2 and store it in pointer
    pAge2 = &age2;
    cout << "Address itself: " << pAge2 << endl;
    cout << "value stored in address: " << *pAge2 << endl;

    int intArray[] = {1, 2, 3, 4};
    int* pIntArray = intArray;
    cout << "1st " << pIntArray << endl;
    // get next address
    pIntArray++;
    cout << "2nd " <<pIntArray << endl;
    // intArray is already a pointer, no need to use &
    DoubleArray(intArray, 4);
    for(int i = 0; i < 4; ++i)
    {
        cout << "Array " << intArray[i] << endl;
    }
    return 0;
}

// add funct after main
double AddNumbers(double num1 = 0, double num2 = 0)
{
    return num1 + num2;
}
void AssignAge(int* pAge)
{
    // use derefrence operator to change value at adress
    *pAge = 22;
}

void DoubleArray(int *arr, int size)
{
    for(int i = 0; i < size; ++i) {
        arr[i] = arr[i] * 2;
    }
}
