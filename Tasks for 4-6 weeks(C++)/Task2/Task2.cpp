// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include"SystemLinearEquation.h"
#include"LinearEquation.h"
#include <iostream>
#include<vector>
using namespace std;

int main()
{
	int n = 3;
	SystemLinearEquation s(n);
	LinearEquation a1("3.0, 2.0,-4.0, 3.0");
	LinearEquation a2("2.0, 3.0, 3.0, 15.0");
	LinearEquation a3("5.0, -3, 1.0, 14.0");
	s.add(a1);
	s.add(a2);
	s.add(a3);
	cout << (string)s << endl;
	s.steppingUp();
	cout << (string)s << endl;
	vector<double> solve = s.solveSystem();
	bool check = true;
}

