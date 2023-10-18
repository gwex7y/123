#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Введите число";
    cin>>num;

    if(num<0){
            cout<< "Отрицательное";
    }else if (num>0) {
    cout<< "Положительное";
    }else {
        cout<< "Нулевое число";
        return 0;

            if (num % 2 == 0) {
                    cout<< "четное число";

        } else {
            cout<< "нечетное число";
        }
        return 0;
}
}
