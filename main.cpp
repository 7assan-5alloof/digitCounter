#include <iostream>

using namespace std;

int counter(int);
int main()
{
    int number;
    cout << "Press Ctrl-C stop" << endl;
    while(true)
    {
    cout << "Enter a number: ";
    cin >> number;
    cout << counter(number) << endl;
    }

    return 0;
}
int counter(int number)
{
	int numberOfDigits = 0;
	while (number > 0)
	{
		number /= 10;
		numberOfDigits++;
	}
	return numberOfDigits;
}
