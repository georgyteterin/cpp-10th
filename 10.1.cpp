#include <iostream>
#include <string>
#include <clocale>
using namespace std;

class first {
public:
	int a_first;
	int b_first;

	first() {
		cout << "enter your a_first: ";
		cin >> a_first;
		cout << " now enter your b_first: ";
		cin >> b_first;
	} 

	void first_func(int a, int b) {
		int c;
		for (int i = 0; i < a; i++) {
			b = i * b;
			cout <<"now b is: " << b << "\t";
			}
	}
};

class second {
public:
	int a_second;
	int b_second;

	second() {
		cout << "enter your a_second: ";
		cin >> a_second;
		cout << "...and enter your b_second: ";
		cin >> b_second;
	}

	void second_func(int a, int b) {
		int c;
		for (int i = 0; i < a; i++) {
			b = a * b;
			a = i * a;
			cout << "now b is: " << b << "\t";
		}
	}
};

class third : public first, public second {
public:
	void print() {
		cout << "all variables are: " << a_first << "\t" << b_first << "\t" << a_second << "\t" << b_second << endl;
	}
};


int main() {
	setlocale(LC_CTYPE, "rus");
	third example;
	example.print();
	return 0;
}