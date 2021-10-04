#include<iostream>
using namespace std;

float add (float num1, float num2)
{
	float res;
	res = num1 + num2;
	return res;
}
float sub (float num1, float num2)
{
	float res;
	res = num1 - num2;
	return res;
}
float mul (float num1, float num2)
{
	float res;
	res = num1 * num2;
	return res;
}
float div (float num1, float num2)
{
	if (num2 == 0)
	{
		cout << "Division by 0 not possible, returning garbage value..." << endl;
		return 99999999999;
	}
	float res;
	res = num1 / num2;
	return res;
}
int mod (int num1, int num2)
{
	int res;
	res = num1 % num2;
	return res;
}

int main()
{
	int choice;
	float op1, op2, res;
	while(true)
	{
	cout << "Press 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division, 5 for remainder, anything else to exit" << endl;
	cin >> choice;
	cout << "Enter 2 numbers:" << endl;
	cin >> op1 >> op2;
		switch(choice)
		{
			case 1:	res = add(op1, op2);
				break;
			case 2: res = sub(op1, op2);
				break;
			case 3: res = mul(op1, op2);
				break;
			case 4: res = div(op1, op2);
				break;
			case 5: res = mod(int(op1), int(op2));
				break;
			default: exit(0);
		}
		cout << res << endl;
	}
	return 0;
}
