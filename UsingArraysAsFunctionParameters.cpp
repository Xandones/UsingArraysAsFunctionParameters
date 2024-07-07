#include <iostream>
using namespace std;

void ShowVector(int Vector[], int VectorSize);

int main()
{
	int Array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30};
	/*
	* int ArraySize = (sizeof(Array) / sizeof(Array[0])); -> How we find out number of array elements in C. 
	* To calculate the number of elements of an array we must divide its size in bytes(using sizeof) by the size of the first element(also using sizeof).
	* An alternative to sizeof is using std::size(Array) from C++.
	* int ArraySize = size(Array);
	*/
	int ArraySize = size(Array);
	cout << "Array size: " << ArraySize << "\n";
	ShowVector(Array, ArraySize);
}

void ShowVector(int Vector[], int VectorSize) // It's not necessary to pass the size of the array to the function but it's no wrong also.
{
	for (int i = 0; i < VectorSize; i++)
	{
		cout << (i + 1) << " - " << Vector[i] << "\n";
	}
}
