#include <iostream>

using namespace std;

int perimeter(float a, float b, float c)
{
	return a+b+c;
}

float square_geron(float a, float b, float c)
{
	float p = perimeter(a, b, c) / 2.0f;
	return p;
}

int main()
{
	float a = 2, b = 3, c = 2;
	cout << "===PERIMETER:=== " << perimeter(a, b, c) << endl;
	cout << "===HALF-PERIMETER:===" << square_geron(a, b, c) << endl;
	return 0;
}
