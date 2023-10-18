#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

 int main ()
 {
    SetConsoleOutputCP(1251);
    float f, a, b, h;
    cout << "Введите значение интервала + шаг" << endl;

    cin >> a >> b >> h;
    cout << "x/tf(x)" << endl;

    for(float i=a; i <= b; i+=h)
{

    if (i<=-1)
    f = 0;
    else if (pow(i,3)<=1)
    f = 3*pow(i,2);
    else
    f = exp(1-i);
    cout << "f(x)=" << f;
    return 0;
}
}

