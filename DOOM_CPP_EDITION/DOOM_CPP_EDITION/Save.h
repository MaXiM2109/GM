#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <stdio.h>
#include <windows.h>
#include <fstream>
class Save
{
public:
	Save()
	{
	}
	void save(string name, int lvl, int health)
	{
		setlocale(LC_ALL, "Rus");
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		std::ofstream out;
		out.open("D:\\"+name+".txt");
		if (out.is_open())
		{
			out << lvl <<  std::endl;
			out << health << std::endl;
		}
		out.close();

	}
};
