#include <iostream>
#include <ctime>
#include <cstdlib>

double mean(double num, double num1) {
	return (num + num1) / 2;
}

void mean_arr(int arr[], const int legath) {
	double sum = 0;
	double arith = 0;
	for (int i = 0; i < legath; i++)
		sum += arr[i];
	arith = sum / legath;
		std::cout << arith << ' ';
	std::cout << std::endl;
}

void powers(int num1, int num2) {
	int counter = 0;
	do {
		std::cout << pow(num1, counter) << std::endl;//Запомнила на паре
	//воспользовалась этой функцией)
		counter++;
	} while (num2 >= counter);
}

void positive_arr(int arr[], const int legath) {
	int counter = 0;
	for (int i = 0; i < legath; i++) {
		if (arr[i] < 0)
			arr[i] = -arr[i];
			std::cout << arr[i] << "  ";
	}
}



int main() {
	setlocale(LC_ALL, "Russian");
	
	//Задача 1.
	int n, m;
	std::cout << "Задача №1.\n Введите первое число -> ";
	std::cin >> n;
	std::cout << "Введите второе число -> ";
	std::cin >> m;
	std:: cout << "Среднее арифметическое: " << mean(n, m);
	
	//Задача 2.
	std::cout << "Задача №2.\n";
	const int size = 5;
	int arr[size]{ 3, 5, 9, 1, 10};

	std::cout << "Среднее арифметическое массива:\n";
	mean_arr(arr, size);
	
	//Задача 3.
	std::cout << "Задача №3.\n";
	int n, m;
	std::cout << "Введите первое число -> ";
	std::cin >> n;
	std::cout << "Введите второе число -> ";
	std::cin >> m;

	std::cout << "Степени всех чисел:\n";
	powers(n, m);

	//Задача 4.
	std::cout << "Задача №4.\n";
	const int size = 5;
	int arr1[size]{ -12, 10, -2, 6, 8 };
	std::cout << "Массив:\n";
	for (int i = 0; i < size; i++) {
		std::cout << arr1[i] << "  ";
	}
	std::cout << '\n';

	std::cout << "Положительный массив:\n";
	positive_arr(arr1, size);


	return 0;
}