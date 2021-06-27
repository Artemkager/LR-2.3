#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    string a, a1, a2; // обозначение для ввода строки, подстроки для изменения и своей подстроки
    cout << "Введите строку - ";
    cin >> a;
    cout << "Введите подстроку которую хотите заменить - ";
    cin >> a1;
    cout << "Введите свою подстроку - ";
    cin >> a2;
    a.replace(a.find(a1), a1.size(), a2); // replace замена символов в строке, find нахождение символов в строке, size возвращение длины строки
    cout << a << " - полученная строка" << endl;
    cout << endl;
    system("pause");
    return 0;
}

