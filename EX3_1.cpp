#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
	int arr[10], i, x, y;
	float sum = 0.00, average;
    
    cout << "Enter 10 elements of the array : " ;
    
    for (i = 0; i < 10; i++)
        cin >> arr[i];
    x = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (x < arr[i])
           { x = arr[i];}
    }
    y = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (y > arr[i])
            { y = arr[i];}
    }
    for (i = 0; i < 10; i++)
    {
    	sum += arr[i];
	}
    for (i = 0; i < 10; i++)
    {
    	average = sum / 10;
	}
    
    cout << "\n\nThe largest integer is: " << x << endl;
    cout << "The smallest integer is: " << y << endl;
    cout << "The total is: " << sum << endl;
    cout << "The average is: " << average << endl;
    
    getch();
    return 0;
}
