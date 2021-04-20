// 5.1.B.cpp 
#include <iostream>
#include <exception>
#include <stdexcept>
#include "LongLong.h"
#include <Windows.h> 

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    LongLong A, B,s;
    bool result;

    cout << " LongLong: " << endl;

    do
    {
        try
        {
            result = true;
            cin >> A;
        }
        catch (invalid_argument e)
        {
            result = false;
            cout << e.what() << endl;
        }
        catch (bad_exception e)
        {
            result = false;
            cout << e.what() << endl;
        }
        catch (Bad_exception& e)
        {
            result = false;
            cout << e.what() << endl;
        }
        catch (const char* e)
        {
            result = false;
            cerr << e << endl;
        }
    } while (!result);

    
    cout << A;
    cin >> B;
    cout << B;

    cout << " Додавання = " << A + B << endl;
    cout << " Mноження = " << A * B << endl;
    cout << " Порівняння старших: " << endl;
    cout << " \n "; s.Compare(A, B);
    cout << "Порівняння молодших: " << endl;
    cout << " \n "; s.Compare1(A, B);

    cout << " A++ " << endl; cout << A++ << endl;
    cout << " A-- " << endl; cout << A-- << endl;
    cout << " ++A " << endl; cout << ++A << endl;
    cout << " --A " << endl; cout << --A << endl;

    return 0;
}