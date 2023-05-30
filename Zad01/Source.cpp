#include<iostream>
#include<windows.h>
using namespace std;

void load(int& startX, int& startY, int& endX, int& endY)
{
	cout << "A1: ";
	cin >> startX;

	cout << "A2: ";
	cin >> startY;

	cout << "B1: ";
	cin >> endX;

	cout << "B2: ";
	cin >> endY;
}

void findPath(int startX, int startY, int endX, int endY) 
{
	int currentX = startX;
	int currentY = startY;
	do
	{
		for (int i = 1; i <= 20; i++)
		{
			for (int j = 1; j <= 40; j++)
			{
				if (i == currentX && j == currentY)
				{
					cout << "X";
					continue;
				}
				if (i == startX && j == startY) 
				{
					cout << "A";
					continue;
				}
				else if (i == endX && j == endY) 
				{
					cout << "B";
					continue;
				}
				cout << "-";
			}
			cout << endl;
		}
		if (currentX > endX) 
		{
			currentX--;
		}
		else if (currentX < endX) 
		{
			currentX++;
		}
		else if (currentY > endY) 
		{
			currentY--;
		}
		else if (currentY < endY) 
		{
			currentY++;
		}
		Sleep(250);
		if (!((currentX == endX) && (currentY == endY)))
		{
			system("CLS");
		}

	} while (!((currentX == endX) && (currentY == endY)));	

}

int main() 
{
	int startX, startY, endX, endY;
	load(startX, startY, endX, endY);
	system("clear");
	findPath(startX, startY, endX, endY);


	return 0;
}