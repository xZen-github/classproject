#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>



float add (float x, float y)
{
     return x + y;
}
float subtract (float x, float y)
{
    return x - y;
}

float multiply (float x, float y)
{
    return x * y;
}

float divide (float x, float y)
{
    return x / y;
}


int main()
{
    int losowa = std::rand();
    float x, y, z;
    utopia:
    std::cout << "Chilera utopia pl \n";
    std::cout << "1) Kalkulator\n2) Obliczanie pola figur\n3) Generator liczb losowych \n";
    char choice, op, exit;
    std::cin >> choice;
        if (choice == '1') // kalkulator
        {
            std::cout << "Podaj 2 liczby \n";
            std::cin >> x >> y;
            std::cout << "1) Dodawanie\n2) Odejmowanie\n3) Mnozenie\n4) Dzielenie \n";
            std::cin >> op;
                if (op == '1') // dodawanie
                {
                     std::cout << "Wynik:" << add(x, y) << "\n";
                     std::cout << "Czy chcesz obliczyc cos jeszcze? y/n \n";
                     std::cin >> exit;
                     if (exit == 'y')
                     {
                        system("cls");
                        goto utopia;
                     }
                     else if (exit == 'n')
                     {
                        system("cls");
                        goto orka;
                     }
                }
                else if (op == '2') // odejmowanie
                {
                    std::cout << "Wynik:" << subtract(x, y) << "\n";
                    std::cout << "Czy chcesz obliczyc cos jeszcze? y/n \n";
                    std::cin >> exit;
                    if (exit == 'y')
                    {
                        system("cls");
                        goto utopia;
                    }
                    else if (exit == 'n')
                    {
                        system("cls");
                        goto orka;
                    }
                }
                else if (op == '3') // mnozenie
                   {
                    std::cout << "Wynik:" << multiply(x, y) << "\n";
                    std::cout << "Czy chcesz obliczyc cos jeszcze? y/n \n";
                    std::cin >> exit;
                    if (exit == 'y')
                    {
                        system("cls");
                        goto utopia;
                    }
                    else if (exit == 'n')
                    {
                        system("cls");
                        goto orka;
                    }
                   }
                else if (op == '4') // dzielenie
                   {
                    std::cout << "Wynik:" << divide(x, y) << "\n";
                    std::cout << "Czy chcesz obliczyc cos jeszcze? y/n \n";
                    std::cin >> exit;
                    if (exit == 'y')
                    {
                        system("cls");
                        goto utopia;
                    }
                    else if (exit == 'n')
                    {
                        system("cls");
                        goto orka;
                    }
                   }

        }
        else if (choice == '2') // obliczanie pola figur
        {
          //  std::cout << "Podaj dlugosci bokow \n";
          //  std::cin >> x >> y;
            std::cout << "Jaka figura boomerze?\n1) Kwadrat\n2) Prostokat\n3) Trojkat\n4) Trapez\n";
            std::cin >> op;
                if (op == '1') // kwadrat
                {
                    std::cout << "Podaj dlugosci bokow \n";
                    std::cin >> x >> y;
                    std::cout << "Wynik:" << multiply(x, y) << "\n";
                    std::cout << "Czy chcesz obliczyc cos jeszcze? y/n \n";
                    std::cin >> exit;
                    if (exit == 'y')
                    {
                        system("cls");
                        goto utopia;
                    }
                    else if (exit == 'n')
                    {
                        system("cls");
                        goto orka;
                    }
                }
                else if (op == '2') // prostokat
                {
                    std::cout << "Podaj dlugosci bokow \n";
                    std::cin >> x >> y;
                    std::cout << "Wynik:" << multiply(x, y) << "\n";
                    std::cout << "Czy chcesz obliczyc cos jeszcze? y/n \n";
                    std::cin >> exit;
                    if (exit == 'y')
                    {
                        system("cls");
                        goto utopia;
                    }
                    else if (exit == 'n')
                    {
                        system("cls");
                        goto orka;
                    }
                }
                else if (op == '3') // trojkat
                {
                    std::cout << "Podaj dlugosci bokow \n";
                    std::cin >> x >> y >> z;
                    std::cout << "Wynik:" << 0.5*(x + y + z) << "\n";
                    std::cout << "Czy chcesz obliczyc cos jeszcze? y/n \n";
                    std::cin >> exit;
                    if (exit == 'y')
                    {
                        system("cls");
                        goto utopia;
                    }
                    else if (exit == 'n')
                    {
                        system("cls");
                        goto orka;
                    }
                }
                else if (op == '4') // trapez
                {
                    std::cout << "Podaj dlugosci bokow \n";
                    std::cin >> x >> y;
                    std::cout << "Podaj wysokosc \n";
                    std::cin >> z;
                    std::cout << "Wynik:" << ((x + y) * z) / 2.0 << "\n";
                    std::cout << "Czy chcesz obliczyc cos jeszcze? y/n \n";
                    std::cin >> exit;
                    if (exit == 'y')
                    {
                        system("cls");
                        goto utopia;
                    }
                    else if (exit == 'n')
                    {
                        system("cls");
                        goto orka;
                    }
                }
        }
                else if (choice == '3') // losowanie liczb
                {
                srand( time( NULL ) );
                std::cout << "Wylosowanie pierwsze: " << std::rand() << "\n";
                std::cout << "Wylosowanie drugie: " << losowa << "\n";
                losowa = std::rand();
                std::cout << "Wylosowanie trzecie: " << losowa << "\n";
                std::cout << "Czy chcesz losowac jeszcze raz? y/n \n";
                std::cin >> exit;
                if (exit == 'y')
                {
                    system("cls");
                    goto utopia;
                }
                else if (exit == 'n')
                {
                    system("cls");
                    goto orka;
                }
        }

    orka:
    return 0;
}