#include <iostream>

using namespace std;

int main()
{
    double s, a1, a2, a3, b1, b2, b3;
    cout<< "������� ������� ������ ���� S:";
    cin>> s;
    cout<< "������� ������ ��� ������� ���� ���� (a1%):";
    cin>> a1;
     cout<< "������� ������ ��� ������� ���� ���� (a2%):";
     cin>> a2;
      cout<< "������� ������ ��� �������� ���� ���� (a3%):";
    cin>> a3;
    cout<< "������� ������� ����� ������� ���� (b1%):";
    cin>> b1;
       cout<< "������� ������� ����� ������� ���� (b2%):";
    cin>> b2;


    //���������� ������� ������� ���������
    b3=100-b1-b2;
    double shrinkage = (a1*b1/100)+(a2*b2/100)+(a3*b3/100);
    double finalArea = s - (s*shrinkage/100);

    //����� ����������
    cout<< "������� ������� ���������:"
    <<FinalArea<<"m2"<<endl;


    return 0;

}
