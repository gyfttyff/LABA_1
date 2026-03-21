#include <iostream>
#include <cmath>

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

int main()
{
	float a = 2, b = 3, c = 2;
	cout << "===PERIMETER:===	" << perimeter(a, b, c) << endl;
	cout << "" << endl;
	cout << "===SQUARE:===        " << square_geron(a, b, c) << endl;
	return 0;
}
