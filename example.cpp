#include <iostream>
#include <string>

using namespace std;

/*что бы протестировать любую программу 
подключите соответсвующую библиотеку и раскомментируйте ф-ию main*/

//#include "autopark(13).h"
//#include "car(12).h"
//#include "evensInArray(11).h"
//#include "wordCounter(10).h"
//#include "maxColumn(9).h"
//#include "mainDiagonal(8).h"
//#include "maxNum(7).h"
//#include "findNumbersInStrings(6).h"
//#include "findAmountOfNumbersInString(5).h"
#include "findDigitsInNumber(4).h"

/*	#13 массив структур и ф-ии сортировки и поиска
int main()
{
	int n = getSize();
	Car* carArr = allocMem(n);

	getPark(carArr, n);
	showPark(carArr, n);

	sortYear(carArr, n);
	showPark(carArr, n);

	search(carArr, n);

	delete[] carArr;
	return 0;
}*/

/* #12 структура "автомобиль"
int main()
{
	Car obj = getInfo();
	showInfo(obj);
	return 0;
}*/

/*	#11 найти четные в массиве, удалить их, а из их индексов сделать новый массив
int main()
{
	int size = get_size();
	int* arr = get_arr(size);
	replace_even(arr, size);
	return 0;
}*/

/*	#10 найти кол-во слов в строке
int main()
{
	string strIn, strOut;
	cout << "Input string:" << endl;
	getline(cin, strIn, '\n');
	strOut = delete_space(strIn);
	cout << counter(strOut) << endl;
	return 0;
}*/

/*	#9 найти и вывести столбец матрицы с наибольним числом
int main()
{
	int rows = get_size(), cols = get_size();
	int** arr = matrix(rows, cols);

	print_matrix(arr, rows, cols);
	print_col(arr, rows, cols);
	
	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}*/


/*	#8 сформировать и вывести массив из главной диагонали матрицы
int main()
{
	int size = get_size();
	int** arr = matrix(size), * mass = arr_to_mass(arr, size);
	print_matrix(arr, mass, size);

	delete[] mass;
	delete[] arr;
	return 0;
}*/

/*	#7 найти и вывести наибольшее число в матрице
int main()
{
	int rows = get_num(), cols = get_num();
	float** arr = alloc_mem(rows, cols);

	get_matrix(arr, rows, cols);
	print_matrix(arr, rows, cols);

	cout << "Maximum element = " << find_max(arr, rows, cols);

	clear_mem(arr, rows);

	return 0;
}*/

/*	#6 сформировать массив из чисел в строках массива из строк
int main()
{
	int count = 0, max = 0, strSize = get_size();
	string* str = new string[strSize];

	cout << "Input lines: " << endl;
	for (int i = 0; i < strSize; i++) {
		cin >> str[i];
	}
	count = counter(str, strSize);
	int* arr = new int[count];
	fill_arr(arr, count, str, strSize);
	print_arr(arr, count);

	delete[] str;
	delete[] arr;
	return 0;
}*/


/*	#5 найти кол-во цифр в строке
int main()
{
	string str;

	cout << "Input line: " << endl;
	cin >> str;
	counter(str);

	return 0;
}*/


/* #4 найти количесвто цифр в числе
int main()
{
	int size = scan_size();
	int* arr = new int[size];
	scan(arr, size);
	counter(arr, size);
	print(arr, size);
}*/

/*	#3
void sort(string* str, int size);
void sortSelection(string* str, int size);

int main()
{
	int size = 0;
	string* str;

	cout << "Input the number of lines: ";
	cin >> size;

	str = new string[size];	
	cout << "\nInput lines:\n";
	for (int i = 0; i < size; i++) {
		cin >> str[i];
	}
	sortSelection(str, size);
	cout << "\nReuslt:\n";
	for (int i = 0; i < size; i++) {
		cout << str[i] << "\n";
	}
	delete[] str;
	return 0;
}

void sort(string* str, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i; j > 0; j--) {
			if (str[j - 1].size() < str[j].size()) {
				swap(str[j - 1], str[j]);	
			}
		}
	}
}

void sortSelection(string* str, int size) {
	for (int i = 0; i < size - 1; i++) {
		int index = i;
		string max = str[i];
		for (int j = i + 1; j < size; j++) {
			if (str[j].size() > max.size()) {
				max = str[j];
				index = j;
			}
		}
		swap(str[i], str[index]);
	}
}*/


/*	#2 найти в массиве элемент с максильной суммой цифр
#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
	int A[8], index = 0, number = NULL, sum = NULL, maxSum = NULL;
	cout << "Input the elements of array:" << endl;
	for (int i = 0; i < 8; i++) {
		cin >> A[i];
		number = A[i];
		while (number != 0) {
			sum += number % 10;
			number /= 10;
		}
		if (maxSum < sum) {
			maxSum = sum;
			index = i;
		}
		sum = 0;
	}
	cout << "index: " << index;
	return 0;
}*/
