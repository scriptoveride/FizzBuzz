#include <iostream>
#include <Windows.h>

using namespace std;

int x = 300;
int number3 = 1;
int number5 = 1;

int main() {

    for (int i = 1; i < 101; i++) {

		if (i == 3 * number3) {

			if (i == 5 * number5) {
				cout << "FizzBuzz" << endl;
				number5++;
				number3++;
			}
			else
			{
				cout << "Fizz" << endl;
				number3++;
			}
		}
		else {

			if (i == 5 * number5) {
				cout << "Buzz" << endl;
				number5++;
			}
			else
			{
				cout << i << endl;
			}
		}
    }
}
