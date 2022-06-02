#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> tarabar(vector<int> text) {
	vector<int> alphabet,c_alphabet, cipher;

	int counter = 97;
	for (int i = 0; i <= 25; i++) {
		alphabet.push_back(counter);
		c_alphabet.push_back(counter);
		counter++;
	}
	reverse(, c_alphabet.end());/////////////////////

	return cipher;
}


void show_vector(vector<int>& a)
{
	for (vector<int>::iterator it = a.begin(); it != a.end(); ++it)
		cout << *it << " ";
}


int main() {
	vector<int> a{ 1,3,53,12 };

	return 0;
}
