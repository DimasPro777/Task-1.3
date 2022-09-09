#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251");
    int a, b, c, D;
    cout << "Введите переменные a, b и c: ";
    cin >> a >> b >> c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "x любое число";
            }
            else
            {
                cout << "Ошибка";
            }
        }
        else
        {
            cout << "x = " << -c / b;
        }
    }
    else
    {
        D = b * b - 4 * a * c;
        if (D < 0)
        {
            cout << "Ошибка" << std::endl;
        }
        if (D == 0)
        {
            cout << "x = " << -b / (2 * a) << std::endl;
        }
        else
        {
            cout << "x1 = " << (-b + sqrt(D)) / (2 * a) << std::endl;
            cout << "x2 = " << (-b - sqrt(D)) / (2 * a) << std::endl;
        }
    }
}

