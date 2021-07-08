#include <iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 };
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	char direction;
	cout << "Выберите направление (l - left, r - right): "; cin >> direction;
	if (direction == 'r')number_of_shifts = n - number_of_shifts;
	// Вывод исходного массива на экран
#ifdef LEFT
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	int number_of_shifts;
	cout << "Введите количество сдвигов"; cin >> number_of_shifts;
	int buffer = arr[0];	// сдвиг влево
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	// Вывод сдвинутого массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // LEFT

	// сдвиг вправо
	for (int i = 0; i < number_of_shifts; i++)
	{
		const int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}

	for (int i = 0; i < n; i++)
	{ 
		cout << arr[i] << tab;
	}
	cout << endl;
}
