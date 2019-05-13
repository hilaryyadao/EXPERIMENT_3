#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main ()
{

	int size;
	char in[100], out[100];
	
	cout << "Enter any combination of characters: ";
	cin >> in;
	
	size = strlen(in);
	
	for (int i = 0, j = size ; i <= size ; i++, j--)
    	{
        	 out[j] = in[i];
    	}
    	
    cout << "\n" << endl;
    	
    for (int i=0 ; i<= size ; i++)
    {
        cout << out[i] << ' ';
    }
    
    cout << "\n\nThe size of array is: " << size;
    
	getch();
	return 0;	
}
