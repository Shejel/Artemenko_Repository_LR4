#include<iostream>
using namespace std;

void task1(float num1)
{
    float num1;
    cout << "Введите первое число: ";
    cin>>num1;
    return num1;
}

void task2(float num2)
{
    cout << "Введите второе число: ";
    cin>>num2;
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
    setlocale(LC_ALL,"rus");
    int answer;
    float num1;
    float num2;
    cin>>answer;
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
}