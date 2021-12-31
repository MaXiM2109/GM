#include <iostream>
#include <ctime>
#include <stdio.h>
#include <windows.h>
#include "Game.h"
#include "Story.h"
#include "PlayerProfile.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Story _story;
	Player _player;
	int userChoise;
	string playerName;
	cout << "\n1 - Продолжить\n2 - Начать новую игру\n";
	cin >> userChoise;
	switch (userChoise)
	{
	case 1:
	{
		cout << "\nВведите ваш никнейм\n";
		cin >> _player.playerName;

		//Чтение файла с именем _player.playerName

		setlocale(LC_ALL, "Rus");
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		std::ifstream in("D:\\" + _player.playerName + ".txt");
		if (in.is_open())
		{
			in >> _player.lvl;
			in >> _player.health;
		}
		in.close();
		//Запускаем соответствующий уровень
		_story.LVL(_player.lvl);
		break;
	}
	case 2:
	{
	//Запускаем нулевой уровень
	_story.LVL(0);
		break;
	}
	}
	return 0;
}

