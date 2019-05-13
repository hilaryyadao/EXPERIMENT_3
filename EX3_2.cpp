#include<iostream>
#include<conio.h>
using namespace std;

char Province[3][20] = {"A", "B", "C"};
int Day[1][7] = {1,2,3,4,5,6,7};

int main ()
{
	string A, B, C;
	int temperature[3][7];

    cout << "Enter all temperature for a week of Province A, Province B, and then Province C.\n";

    for (int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 7; ++j)
        {
            cout << "Province " << Province[i] << ", Day " << j + 1 << " : ";
            cin >> temperature [i][j];
        }
    }

    cout << "\n\nDisplaying Values:\n";

    for (int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 7; ++j)
        {
            cout << "Province " << Province[i] << ", Day " << j + 1 << " = " << temperature [i][j] << endl;
        }
    }

	getch();
	return 0;
}
