// A simple calculator program.
// Format of calculator:
// Key in for example: 2 + 3 = and click enter


#include <iostream>
using namespace std;

int main()
{
	
	int num1, num2;
	char op, q;
	
	cout << "Enter a formula: ";
	cin >> num1 >> op >> num2 >> q;
	
	cout << endl;
	
	switch(op)
	{
		case '+': cout << "Answer: " << num1 + num2 << endl;
			break;
		case '-': cout << "Answer: " << num1 - num2 << endl;
			break;
		case '*': cout << "Answer: " << num1 * num2 << endl;
			break;
		case '/': cout << "Answer: " << num1 / num2 << endl;
			break;
	}
	
	return 0;
	
}