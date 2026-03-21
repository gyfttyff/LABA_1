#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int perimeter(float a, float b, float c)
{
	return a+b+c;
}

float square_geron(float a, float b, float c)
{
	float polper = perimeter(a, b, c) / 2.0f;
	double s = sqrt(polper * (polper - a) * (polper - b) * (polper - c)); 
       	return s;	
}

string equisceles_check (float a, float b, float c)
{
	string answ = "NO";
        if (a - b == 0 || a - c == 0 || c - b == 0) answ = "YES";
	return answ;
}	

int main()
{
	float a = 9, b = 3, c = 2;
	cout << "" << endl;
	cout << "START PROGRAM:" << endl;
	cout << "" << endl;
	cout << "Sides of the triangle: " << a << ", " << b << ", " << c << endl;
	cout << "" << endl;
	cout << "===PERIMETER:===	" << perimeter(a, b, c) << endl;
	cout << "" << endl;
	cout << "===SQUARE:===        " << square_geron(a, b, c) << endl;
	cout << "" << endl;
	cout << "===EQUISCELES CHECK:===        " <<  equisceles_check(a, b, c) << endl;
	cout << "" << endl;
	return 0;
}
