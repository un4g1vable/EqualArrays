#include <iostream>
#include<algorithm>
#include<string>
 
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int size1;
    cout << "Введите количество чисел первого массива:" << endl;
    cin >> size1;
	string firstarray[size1];
    string firststring;

    cout << "\n" "Введите числа в массив:" << endl;
	for (int i = 0; i < size1; i++){
        cout << "firstarray[" << i << "] = ";
		cin >> firstarray[i];}
    for (int j = 0; j < size1; j++)
        firststring += firstarray[j];


    int size2;
    cout << "\n" "Введите количество чисел второго массива:" << endl;
    cin >> size2;
	string secondarray[size2];
    string secondstring;

    cout << "\n" "Введите числа в массив:" << endl;
	for (int i = 0; i < size2; i++){
        cout << "secondarray[" << i << "] = ";
		cin >> secondarray[i];}
    for (int j = 0; j < size2; j++)
        secondstring += secondarray[j];

    reverse(secondstring.begin(),secondstring.end());


    if (firststring == secondstring)
        cout << "\n" "Результат программы: True" << endl;
    else 
        cout << "\n" "Результат программы: False" << endl;

}