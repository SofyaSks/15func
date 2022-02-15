
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


int main() {
	setlocale(LC_ALL, "ru");
	
	float n, m;
	cin >> n >> m;
	cout << maxfunc(n, m) << endl;


	cout << "Finish";







	/*int n, m;
	cin >> n >> m;
	cout << func(n,m) << endl;
	cout << func(5.7, 9.1) << endl;*/
	

	return 0;
}