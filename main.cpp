#include <iostream>
#include "matrixMath.h"
#include "vectorMath.h"
#include <list>
# define M_PI           3.14159265358979323846  /* pi */
using namespace std;

void toArray(vec3 vector, float* out[1][3]) {
	float* p_vecValues = vector.getValues();
	float vecValues[1][3];

	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			vecValues[i][j] = p_vecValues[j];
		}
	}
}

int main() {
	float angle = 0;

	matrix<3, 2> m1(new float[3][2] {
		{1, 3},
		{4, -1},
		{-5, 10}
	});

	matrix<2, 2> m2(new float[2][2]{
		{2, 1},
		{-8, 6}
	});
	

	cout << "m1: \n" << m1.toString() << endl; 
	cout << "m2: \n" << m2.toString() << endl;
	cout << "Result: \n" << m1.mult<2,2>(m2).toString() << endl;
	cout << "m1: \n" << m1.toString() << endl; 
	
	system("PAUSE");
	return 0;
}