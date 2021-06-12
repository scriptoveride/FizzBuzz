#include <iostream>
#include <cmath>

using namespace std;

int i = 1;
int number3 = 1;
int number5 = 1;

int main() {

	while (i < 101)
	{
		if (i == 3 * number3) {

			if (i == 5 * number5) {
				cout << "FizzBuzz" << endl;
				number5++;
				number3++;
				i++;
			}
			else
			{
				cout << "Fizz" << endl;
				number3++;
				i++;
			}
		}
		else{

			if (i == 5 * number5) {
				cout << "Buzz" << endl;
				number5++;
				i++;
			}
			else
			{
				cout << i << endl;
				i++;
			}
		}
	}
}
