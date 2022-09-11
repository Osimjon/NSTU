#include <iostream>

using namespace std;

void option_1() {
	float y = 0;
	cout << "For function: " << endl;
	cout << "x    y" << endl;
	for (float x = -9; x <= 9; x+=0.5)
	{
		if (-9 <= x && x <= -6) {
			y = -sqrt(-27-x*x-12*x);
		}
		else if (-6 < x && x <= -3) {
			y = x + 4;
		}
		else if (-3 < x && x <= 0) {
			y = sqrt(9-x*x);
		}
		else if (0 < x && x <= 3) {
			y = -x+3;
		}
		else if (3 < x && x <= 9) {
			y = 0.5*x-1.5;
		}
		cout << x << "  " << y << endl;
	}
}

int option_2(int a, int x, int p) {
	int y;
	int t;
	int t0;
	y = x % (p - 1);
	t = 0;
	t0 = a % p;
	for (int k = 0; k < y; ++k) {
		t = a % p;
		a = t * t0;
	}return t;
}

int option_3(int b = 1234, int a = 54) {	
	while (b != 0) {
		a %= b;
		swap(a, b);
	}
	return a;
}

int option_4(int b, int a) {
	int x = 1, y = 0, x1 = 0, y1 = 1, x2 = 0, y2 = 0, q = 0, r = 1, a1;
	a1 = a;
	while (r != 0) {
		q = a / b;
		r = a % b;
		x2 = x - q * x1;
		y2 = y - q * y1;
		x = x1;
		y = y1;
		x1 = x2;
		y1 = y2;
		a = b;
		b = r;
	}
	if (y < 0) {
		y = y + a1;
	}
	return y;
}

void option_7() {
	int a, b, c;
	cin >> a >> b >> c;
	int nom_stad = 0, ost = 0, b_mod = b % 4, a_mod = a % 10;
	if (a_mod == 0) cout << "Last numb is 0";
	else if (a_mod == 1) cout << "Last numb is 1";
	else if (a_mod == 5) cout << "Last numb is 5";
	else if (a_mod == 6) cout << "Last numb is 6";
	else {
		for (int i = 1; i <= c; i++) {
			nom_stad = b % 4;
			b = b_mod * nom_stad;
		}
		if (a % 2 == 0 && nom_stad == 0) {
			cout << "Last numb is 6";
		}
		else if (a % 2 != 0 && nom_stad == 0) {
			cout << "Last numb is 1";
		}
		else {
			for (int j = 1; j <= nom_stad; j++) {
				ost = a % 10;
				a = a_mod * ost;
			}
			cout << "Last numb is " << ost;
		}
	}
}

long long int power(long long int a, long long int b, long long int P) {// возвращает значение a ^ b mod P
	return (((long long int)pow(a, b)) % P);
}

int main()
{
	//option_1();			//циклы, где нет цифр в условии - принимают значение в ходе работы, 
	option_2(253, 1, 24); //либо не нуждаются в условиях
	//option_3(24, 18);
	//option_4(173, 23);
	//option_7();


	/*long long int x, y, a, b, ka, kb;// открытые ключи: G  P                                           // закрытый ключ Алисы - а, Боба - b
	long long int P = 808;
	long long int G = 394;

	printf("public key P : %lld\n", P);
	printf("public key G : %lld\n\n", G);

	a = 4;
	printf("private key a : %lld\n", a);
	x = power(G, a, P);                    // сгенерированный ключ

	b = 3;
	printf("private key b : %lld\n\n", b);
	y = power(G, b, P);                   // сгенерированный ключ

		// общие секретные ключи
	ka = power(y, a, P); // секретный ключ для Алисы
	kb = power(x, b, P); // секретный ключ для Боба

	printf("secret key a : %lld\n", ka);
	printf("secret Key b : %lld\n", kb);
	return 0; */
	
}
