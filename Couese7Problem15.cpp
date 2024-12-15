
#include <iostream>
#include <iomanip>

using namespace std;

short ReadNumber()
{
	short Number = 0;
	cout << "Enter a number:\n";
	cin >> Number;
	return Number;
}

void PrintMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d\t", 2, Arr[i][j]);
		}
		cout << "\n";
	}
}

short CountNumberInMatrix(short Arr1[3][3], short Rows, short Cols , short Number)
{
	short Counter = 0;

	for (short i = 0; i < Rows; i++)
	{

		for (short j = 0; j < Cols; j++)
		{

			if (Arr1[i][j] == Number)
			{
				Counter++;
			}

		}

	}

	return Counter;

}


int main()
{

	srand((unsigned)time(NULL));


	short Arr1[3][3] = { {3,10,5} , {5,10,1} , {12,12,10} };

	short 	Number = ReadNumber();

	cout << "\n 3x3 matrix:\n";
	PrintMatrix(Arr1, 3, 3);

	cout << "\n Number "<< Number <<" count in matrix is "<<CountNumberInMatrix(Arr1 , 3 , 3 , Number) << "\n";

	return 0;
}