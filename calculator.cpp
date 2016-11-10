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
double pow(float a, float b) {
	double res = 1;
	for (; b > 0; b--)
	{
		res = res * a;
	}
	return res;
}
double sqrt(float a)
{
	double c = 0, res;
	res = a;
	while (c - res > 0.00001 || c - res < -0.00001)
	{
		c = res;
		res = (c + a / res) / 2;
	}
	return res;
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
