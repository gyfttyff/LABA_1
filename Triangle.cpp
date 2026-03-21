#include <iostream>
// #include <>

using namespace std;

int perimeter(float a, float b, float c)
{
	return a+b+c;
}

float square_geron(float a, float b, float c)
{
	float polper = perimeter(a, b, c) / 2.0f;
	float s = 0; 
       	return 0;	
}

int main()
{
	float a = 2, b = 3, c = 2;
	cout << "===PERIMETER:=== " << perimeter(a, b, c) << endl;
	cout << "===SQUARE:===" << square_geron(a, b, c) << endl;
	return 0;
}
