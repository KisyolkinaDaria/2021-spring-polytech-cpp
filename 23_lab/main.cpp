// Напишите функцию, которая заполняет массив случайными
// целыми числами из диапазона от 0 до n. Воспользуйтесь функциями
// std::rand() и std::srand().

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
using namespace std;

void array_initialization(int array_dimension, int n)
{
	int array[2][2];
	srand(time(0));

	for (int i = 0; i < array_dimension; i++)
	{
		for (int j = 0; j < array_dimension; j++)
		{
			array[i][j] = rand() % n;

			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	setlocale(LC_CTYPE, "RUS");
	
	int array_dimension;
	int n;
	cout << "Введите размерность массива:" << endl;
	cin >> array_dimension;
	cout << "Введите конечное число рандомных чисел:" << endl;
	cin >> n;
	cout << endl;
	array_initialization(array_dimension, n);

}
