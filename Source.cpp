#include<iostream>
#include<conio.h>
#include <ctime>

using namespace std;

int main()
{

	int size;
	cout << "\n  Enter the number of digits ->  "; cin >> size;
	if (size < 1) { cout << "Error"; _getch(); return 0; }


	double* mas_yporyadkovanuy = new double[size];	// масив з упорядкованими елементами
	double* mas_zvorotniy = new double[size];	// масив з упорядкованими елементами в зворотньому порядку
	double* mas_random = new double[size];		// Масив з довільними елементами в діапазоні від 0 до розмір_масиву*11

	for (int i = 0; i < size; i++) {			//заповнюємо масиви
		mas_yporyadkovanuy[i] = i;
		mas_zvorotniy[i] = size - i;
		mas_random[i] = rand() % size * 11;
	}


	cout << " \n		Bubble Sort " << endl;
	int x = 0;
	double tmp;								// Сортування Бульбашкою упорядкованого масиву
	unsigned int start_time = clock();
	for (int i = size - 1; i >= x; i)
	{
		for (int j = size - 1; j >= x; j--) {
			if (mas_yporyadkovanuy[j] < mas_yporyadkovanuy[j - 1]) {
				tmp = mas_yporyadkovanuy[j];
				mas_yporyadkovanuy[j] = mas_yporyadkovanuy[j - 1];
				mas_yporyadkovanuy[j - 1] = tmp;

			}
		}
		x++;
	}
	unsigned int end_time = clock();
	unsigned int search_time = end_time - start_time;
	cout << " Runtime (Arranged array) - " << search_time / 1000 << " s " << endl;


	x = 0, tmp = 0;							// Сортування Бульбашкою довільного масиву
	start_time = clock();
	for (int i = size - 1; i >= x; i)
	{
		for (int j = size - 1; j >= x; j--) {
			if (mas_random[j] < mas_random[j - 1]) {
				tmp = mas_random[j];
				mas_random[j] = mas_random[j - 1];
				mas_random[j - 1] = tmp;

			}
		}
		x++;
	}
	end_time = clock();
	search_time = end_time - start_time;
	cout << " Rantime (Arbitrary array) - " << search_time / 1000<< " s " << endl;


	x = 0, tmp = 0;							// Сортування Бульбашкою зворотнього масиву
	start_time = clock();
	for (int i = size - 1; i >= x; i)
	{
		for (int j = size - 1; j >= x; j--) {
			if (mas_zvorotniy[j] < mas_zvorotniy[j - 1]) {
				tmp = mas_zvorotniy[j];
				mas_zvorotniy[j] = mas_zvorotniy[j - 1];
				mas_zvorotniy[j - 1] = tmp;

			}
		}
		x++;
	}
	end_time = clock();
	search_time = end_time - start_time;
	cout << " Rantime (Inverse array) - " << search_time / 1000 << " s " << endl;


	cout << " \n		Insertion sort  " << endl;

	for (int i = 0; i < size; i++) {			// Оновлення масиву
		mas_yporyadkovanuy[i] = i;
	}
	start_time = clock();						//Сортування методом вставки упорядкованого масиву
	for (int i = 0; i < size - 1; i++)
	{
		x = i + 1;
		tmp = mas_yporyadkovanuy[x];
		for (int j = i + 1; j > 0; j--)
		{
			if (tmp < mas_yporyadkovanuy[j - 1])
			{
				mas_yporyadkovanuy[j] = mas_yporyadkovanuy[j - 1];
				x = j - 1;
			}
		}
	}
	end_time = clock();
	search_time = end_time - start_time;
	cout << " Runtime (Arranged array) - " << search_time / 1000 << " s " << endl;


	for (int i = 0; i < size; i++) {			// Оновлення масиву
		mas_random[i] = rand() % size * 10;
	}
	start_time = clock();						//Сортування методом вставки довільного масиву
	for (int i = 0; i < size - 1; i++)
	{
		x = i + 1;
		tmp = mas_random[x];
		for (int j = i + 1; j > 0; j--)
		{
			if (tmp < mas_random[j - 1])
			{
				mas_random[j] = mas_random[j - 1];
				x = j - 1;
			}
		}
	}
	end_time = clock();
	search_time = end_time - start_time;
	cout << " Rantime (Arbitrary array) - " << search_time / 1000 << " s " << endl;

	for (int i = 0; i < size; i++) {			// Оновлення масиву
		mas_zvorotniy[i] = size - i;
	}
	start_time = clock();						//Сортування методом вставки зворотнього масиву
	for (int i = 0; i < size - 1; i++)
	{
		x = i + 1;
		tmp = mas_zvorotniy[x];
		for (int j = i + 1; j > 0; j--)
		{
			if (tmp < mas_zvorotniy[j - 1])
			{
				mas_zvorotniy[j] = mas_zvorotniy[j - 1];
				x = j - 1;
			}
		}
	}
	end_time = clock();
	search_time = end_time - start_time;
	cout << " Rantime (Inverse array) - " << search_time / 1000 << " s " << endl;



	cout << " \n		Selection sort " << endl;

	for (int i = 0; i < size; i++) {		// Оновлення масиву
		mas_yporyadkovanuy[i] = i;
	}
	start_time = clock();
	for (int i = 0; i < size; i++)			//Сортування методом мінімальних елементів упорядкованого масиву
	{
		tmp = mas_yporyadkovanuy[0];
		for (int j = i + 1; j < size; j++)
		{
			if (mas_yporyadkovanuy[i] > mas_yporyadkovanuy[j])
			{
				tmp = mas_yporyadkovanuy[i];
				mas_yporyadkovanuy[i] = mas_yporyadkovanuy[j];
				mas_yporyadkovanuy[j] = tmp;
			}
		}
	}
	end_time = clock();
	search_time = end_time - start_time;
	cout << " Runtime (Arranged array) - " << search_time / 1000 << " s " << endl;


	for (int i = 0; i < size; i++) {		// Оновлення масиву
		mas_random[i] = rand() % size * 10;
	}
	start_time = clock();//Сортування методом мінімальних елементів довільного масиву
	for (int i = 0; i < size; i++)		
	{
		tmp = mas_random[0];
		for (int j = i + 1; j < size; j++)
		{
			if (mas_random[i] > mas_random[j])
			{
				tmp = mas_random[i];
				mas_random[i] = mas_random[j];
				mas_random[j] = tmp;
			}
		}
	}
	end_time = clock();
	search_time = end_time - start_time;
	cout << " Rantime (Arbitrary array) - " << search_time / 1000 << " s " << endl;


	for (int i = 0; i < size; i++) {	// Оновлення масиву
		mas_zvorotniy[i] = size - i;
	}
	start_time = clock();
	for (int i = 0; i < size; i++)		//Сортування методом мінімальних елементів зворотнього масиву
	{
		tmp = mas_zvorotniy[0];
		for (int j = i + 1; j < size; j++)
		{
			if (mas_zvorotniy[i] > mas_zvorotniy[j])
			{
				tmp = mas_zvorotniy[i];
				mas_zvorotniy[i] = mas_zvorotniy[j];
				mas_zvorotniy[j] = tmp;
			}
		}
	}
	end_time = clock();
	search_time = end_time - start_time;
	cout << " Rantime (Inverse array) - " << search_time / 1000<< " s " << endl;


	cout << " __________________________________________________________________________" << endl;

	delete[] mas_yporyadkovanuy;
	delete[] mas_random;
	delete[] mas_zvorotniy;
	_getch();
	return 0;
}
