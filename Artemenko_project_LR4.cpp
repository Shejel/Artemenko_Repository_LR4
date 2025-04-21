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
    cout<<"Введите первое число: ";
    prov(num1);
}

void task2(float num2)
{
    cout << "Введите второе число: ";
    prov(num2);
}

void task3(float num1, float num2)
{
    cout<<"Сумма равна "<<num1 + num2<<endl;
}

void task4(float num1,float num2)
{
    cout<<"Разность равна "<<num1 - num2 << endl;
}

int main()
{
    setlocale(LC_ALL,"rus");
    int answer;
    float num1;
    float num2;
    prov(answer);
    switch (answer)
    {
        case 1:
            task1(num1);
            main();
        case 2:
            task2(num2);
            main();
        case 3:
            task3(num1, num2);
            main();
        case 4:
            task4(num1, num2);
            main();
        default:
            cout<<"Введите корректное число: ";
            main();    
}