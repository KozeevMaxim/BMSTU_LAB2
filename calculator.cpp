#include <iostream>
#include <stdio.h>
using namespace std;

double sum(float a, float b) {
    return a+b;
}
double dev(float a, float b) {
    return a/b;
}
double mult(float a, float b) {
    return a*b;
}
double sub(float a, float b) {
    return a-b;
}
double pow (float a) {
	unsigned int extent = 4;
	float a2 = a;
	
	if (extent != 0) 
	{
			for (int i = 1; i < extent; i++)
		{
			a = a * a2;
		}
	}
		else a = 1.0;
	
	return (double) a;
}
double sq (float a) {
	float xn = 1.0;  
	float xn1 = 2.0;

	if (a != 1 && a != 0)
	{
		while ((xn1 - xn) > 0.000001 || (xn1 - xn) < -0.000001 )
		{
		 xn = xn1;
		 xn1 = (float)(xn + (float)a/xn)/2;
		}

	}
		else if (a == 1) xn1 = 1;
			else if (a == 0) xn1 = 0;


	return xn1;
}

int main() {
    float a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "a+b=" << sum(a, b) << endl;
    cout << "a/b=" << dev(a, b) << endl;
    cout << "a*b=" << mult(a, b) << endl;
    cout << "a-b=" << sub(a, b) << endl;
    cout << "a^b=" << pow(a, b) << endl;
    cout << "sqrt(a)=" << sqrt(a) << endl;
    return 0;
}
