#include <iostream>
#include <math.h>
using namespace std;

int main()

{
double const PI=3.14159265358979323846;
double x,y,z,r;
x = 0,01665;
y = -2,25;
z = 3,15;
r = sqrt(PI*(pow(x,2)+ pow(x,y+2)))*pow(acos(pow(fabs(z-pow(x,2)+y),2)),2);
cout << r << endl;

return 0;
}
