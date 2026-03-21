#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string test_of_exist (float a, float b, float c) // Проверка на существование треугольника по неравенствам треугольника
{
	string answ = "No... It's not a Triangle";
	if (a < b + c && c < b + a && b < c + a) answ = "Yes! It's a Triangle";
	return answ;
}

int perimeter(float a, float b, float c) // Периметр треугольника
{
	return a+b+c;
}

float square_geron(float a, float b, float c) // Площадь треугольника по формуле герона
{
	float polper = perimeter(a, b, c) / 2.0f;
	double s = sqrt(polper * (polper - a) * (polper - b) * (polper - c)); 
       	return s;	
}

string equisceles_check (float a, float b, float c) // Проверка на равнобедренность 
{
	string answ = "NO";
        if (a - b == 0 || a - c == 0 || c - b == 0) answ = "YES";
	return answ;
}	

int main()
{
	float a = 4, b = 3, c = 2;
       	cout << "" << endl;	
	cout << "START PROGRAM:" << endl;
	cout << "" << endl;
	cout << "Sides of the triangle: " << a << ", " << b << ", " << c << endl;
	cout << "" << endl;
	string testexis = test_of_exist(a, b, c);
	cout << "===TEST EXISTENCE OF TRIANGLE===   " << testexis << endl;
	cout << "" << endl;
	if (testexis == "Yes! It's a Triangle")
	{
	cout << "===PERIMETER:===   " << perimeter(a, b, c) << endl;
	cout << "" << endl;
	cout << "===SQUARE:===   " << square_geron(a, b, c) << endl;
	cout << "" << endl;
	cout << "===EQUISCELES CHECK:===   " <<  equisceles_check(a, b, c) << endl;
	cout << "" << endl;
	}
	return 0;
}
// End
