#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() 
{
	int size, y;
	char elmnt[100];
	
	cout << "Array size: ";
	cin >> size;
	
	cout << "Enter array elements: ";
	
	for (int i = 0; i < size; i++)
	{
		cin >> elmnt[i];
	}
	
	cout << "\nThe array after sorting is: ";
	for (int i = 0; i < size; i++)
	{
		for (int x = 0; x < size; x++)
		{
			if (elmnt[i] < elmnt[x])
			{
				y = elmnt[i];
				elmnt[i] = elmnt[x];
				elmnt[x] = y;
			}
		}
	}
	
	for (int i = 0; i < size; i++)
	{
		cout << elmnt[i] << " ";
	}
	
	getch();
	return 0;
}
