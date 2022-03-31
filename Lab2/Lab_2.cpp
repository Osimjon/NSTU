/*Реализовать
представленные задачи на языках программирования C++, Python, Haskell
(только одно задание), C#, Go, Ruby (только одно задание), Java.

1. Дана сторона квадрата a. Найти квадрат его периметра P=4·a.
  С++:
*/
#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int a,p,res;

	cin >> a;
	p = 4 * a;
	res = pow(p, 2);

	cout << res << endl;

	return 0;
}
