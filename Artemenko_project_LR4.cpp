#include<iostream>
using namespace std;

void prov(int& number1)
{
	while ((!(cin >> number1) || (cin.peek() != '\n')))
	{
		cin.clear();
		while (cin.get() != '\n');
		{
			cout << "Введите корректное число!" << endl;
		}
	}
}

void prov(float& number1)
{
	while ((!(cin >> number1) || (cin.peek() != '\n')))
	{
		cin.clear();
		while (cin.get() != '\n');
		{
			cout << "Введите корректное число!" << endl;
		}
	}
}

void task1(float num1)
{
    
}

void task2(float num2)
{
    cout << "Введите второе число: ";
    prov(num2);
}

void task3(float num1, float num2)
{
    
}

void task4(float num1,float num2)
{
    
}

int main()
{
        
}