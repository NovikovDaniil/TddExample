// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include"LinearEquation.h"
#include <iostream>
#include<vector>
using namespace std;

int main()
{
	string s = "4,5,6,-7,4,2.9,1,2";
	LinearEquation a(s);
	double tmp = 2;
	a = a*tmp;
}

