#include <iostream>
#include <time.h>
using namespace std;
void shell_sort(int array[], int size)
{
	for(int step = size/2; step>0; step/=2)
		for(int i = 0; i < step; i++)
		{
			int last = -1; // index of smallest biggest element
			for(int j = i;; j+=step)
				if(last == i+step) // sequence sorted
					break;
				else if(j+step >= size || j+step == last)
				{
					last = j;
					j=i-step;
				}
				else if(array[j] > array[j+step])
				{
					swap(array[j],array[j+step]);
//					for(int k = 0; k < size; k++)
//						cout << array[k] << ' ';
//					cout << endl;
				}
		}
}
int main()
{
	const int size = 10;
	int array[size];
	srand(time(NULL));
	for(int i = 0; i < size; i++)
	{
		array[i]=rand()%100;
		cout << array[i] << ' ';
	}
	cout << endl;
	shell_sort(array,size);
	for(int i = 0; i < size; i++)
		cout << array[i] << ' ';
}
