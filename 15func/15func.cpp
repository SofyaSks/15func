
#include <iostream>
using namespace std;

/*int func(int num1, int num2) {
	cout << "Целые числа\n";
	return (num1 > num2 ? num1: num2);
}
double func(double num1, double num2) {
	cout << "Дробные числа\n";
	return num1 > num2 ? num1 : num2;
}*/


template <typename T1, typename T2> T1 maxfunc(T1 num1, T2 num2) {
	return num1 > num2 ? num1 : num2;
}
template <typename T> T mean(T array[], int length) {
	T sum = 0;
	for (int i = 0; i < length; i++)
		sum += array[i];
	return sum / length;
}


int main() {
	setlocale(LC_ALL, "ru");
	
	/*float n, m;
	cin >> n >> m;
	cout << maxfunc(n, m) << endl;*/

	// Задача 1
	/*cout << "Изначальный массив: ";
	float z1[5]{ 8.5, 1.6, 2.5, 3.5, 2.4 };
	for (int i = 0; i < 5; i++)
		cout << z1[i] << " ";
	cout << "\nСреднее арифметическое элементов массива = " << mean(z1,5)<< endl;*/










	/*int n, m;
	cin >> n >> m;
	cout << func(n,m) << endl;
	cout << func(5.7, 9.1) << endl;*/
	

	return 0;
}