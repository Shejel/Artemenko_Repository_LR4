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

float task1()
{
    float num1;
    cout << "Введите первое число: ";
    prov(num1);
    return num1;
}

float task2()
{
    float num2;
    cout << "Введите второе число: ";
    prov(num2);
    return num2;
}

void task3(float num11, float num22)
{
    cout << "Сумма равна " << num11 + num22 << endl;
}

void task4(float num11, float num22)
{
    cout << "Разность равна " << num11 - num22 << endl;
}

int main()
{
    setlocale(LC_ALL, "rus");
    int answer;
    float num11 = 0;
    float num22 = 0;

    while (true) {
        cout << "Выберите действие:\n"
            << "1. Ввести первое число\n"
            << "2. Ввести второе число\n"
            << "3. Сумма чисел\n"
            << "4. Разность чисел\n"
            << "0. Выход\n";

        prov(answer);

        switch (answer)
        {
        case 1:
            num11 = task1();
            break;
        case 2:
            num22 = task2();
            break;
        case 3:
            task3(num11, num22);
            break;
        case 4:
            task4(num11, num22);
            break;
        case 0:
            return 0;
        default:
            cout << "Введите корректное число!" << endl;
        }
    }
}