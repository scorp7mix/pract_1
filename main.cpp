#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
    // setlocale(0, "");
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    cout << "Задание №1:\n";
    cout << "int\t\tзанимает в памяти\t" << sizeof(int) << "\tбайт\n";
    cout << "short int\tзанимает в памяти\t" << sizeof(short) << "\tбайт\n";
    cout << "long int\tзанимает в памяти\t" << sizeof(long) << "\tбайт\n";
    cout << "float\t\tзанимает в памяти\t" << sizeof(float) << "\tбайт\n";
    cout << "double\t\tзанимает в памяти\t" << sizeof(double) << "\tбайт\n";
    cout << "long double\tзанимает в памяти\t" << sizeof(long double) << "\tбайт\n";
    cout << "char\t\tзанимает в памяти\t" << sizeof(char) << "\tбайт\n";
    cout << "bool\t\tзанимает в памяти\t" << sizeof(bool) << "\tбайт\n";

    {
        cout << "\nЗадание №2:\n";
        int value = 7;
        cout << "Целое число: " << value << "\n";
        cout << "Двоичное представление: ";

        unsigned int order = 32;
        unsigned int mask = 1 << order - 1;
        for (int i = 1; i <= order; i++)
        {
            putchar(value & mask ? '1' : '0');
            value <<= 1;
            if (i % 8 == 0)
                putchar(' ');
            if (i == 1)
                putchar(' ');
        }
    }

    {
        cout << "\nЗадание №2:\n";
        int value = -7;
        cout << "Целое число: " << value << "\n";
        cout << "Двоичное представление: ";

        unsigned int order = 32;
        unsigned int mask = 1 << order - 1;
        for (int i = 1; i <= order; i++)
        {
            putchar(value & mask ? '1' : '0');
            value <<= 1;
            if (i % 8 == 0)
                putchar(' ');
            if (i == 1)
                putchar(' ');
        }
    }

    {
        cout << "\n\nЗадание №3:\n";
        union
        {
            int value;
            float f_value = 7.77;
        };
        cout << "Вещественное число: " << f_value << " типа float\n";
        cout << "Двоичное представление: ";

        unsigned int order = 32;
        unsigned int mask = 1 << order - 1;
        for (int i = 1; i <= order; i++)
        {
            putchar(value & mask ? '1' : '0');
            value <<= 1;
            if (i % 8 == 0)
                putchar(' ');
            if (i == 1)
                putchar(' ');
            if (i == 9)
                putchar('.');
        }
    }

    {
        cout << "\nЗадание №3:\n";
        union
        {
            int value;
            float f_value = -7.77;
        };
        cout << "Вещественное число: " << f_value << " типа float\n";
        cout << "Двоичное представление: ";

        unsigned int order = 32;
        unsigned int mask = 1 << order - 1;
        for (int i = 1; i <= order; i++)
        {
            putchar(value & mask ? '1' : '0');
            value <<= 1;
            if (i % 8 == 0)
                putchar(' ');
            if (i == 1)
                putchar(' ');
            if (i == 9)
                putchar('.');
        }
    }

    {
        cout << "\n\nЗадание №4:\n";
        union
        {
            __int64 value;
            double d_value = -7.77;
        };
        cout << "Вещественное число: " << d_value << " типа double\n";
        cout << "Двоичное представление: ";

        unsigned int order = 64;
        unsigned __int64 mask = 1;
        mask <<= order - 1;
        for (int i = 1; i <= order; i++)
        {
             putchar(value & mask ? '1' : '0');
            value <<= 1;
            if (i % 8 == 0)
                putchar(' ');
            if (i == 1)
                putchar(' ');
            if (i == 12)
                putchar('.');
        }
    }

    return 0;
}