#include <iostream>
#include <time.h>

using namespace std;
//---------------------Функции и Прототипы---------------------------------------

float Mean(int *arr, int size)
{
	float sum = 0;
	float M;

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return M = sum / size;
}



//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------САМА ПРОГА-------------------------------------

	int size;
	cout << "enter the size of the array: ";
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = 1 + rand() % 10;
	}

	cout << "Array :\n";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}

	cout << endl << endl;

	cout << "The arithmetic mean of this array: " << Mean(arr, size) << endl << endl;;

	delete[] arr;
	system("pause");
	return 0;
}
