
#include <bits/stdc++.h>
using namespace std;

#define ROW 5
#define COL 4


int minu(int a, int b)
{
	return (a < b) ? a : b;
}

// A utility function to find min
// of three integers
int min(int a, int b, int c)
{
	return minu(minu(a, b), c);
}

// A utility function to find
// max of two integers
int max(int a, int b)
{
	return (a > b) ? a : b;
}

// The main function that prints given
// matrix in diagonal order
void diagonalOrder(int matrix[][COL])
{
	
	// There will be ROW+COL-1 lines
	// in the output
	for(int line = 1;
			line <= (ROW + COL - 1);
			line++)
	{
		

		int start_col = max(0, line - ROW);

		
		int count = min(line, (COL - start_col), ROW);

		/* Print elements of this line */
		for(int j = 0; j < count; j++)
			cout << setw(5) <<
			matrix[minu(ROW, line) - j - 1][start_col + j];


		cout << "\n";
	}
}

// Utility function to print a matrix
void printMatrix(int matrix[ROW][COL])
{
	for(int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
			cout << setw(5) << matrix[i][j];
			
		cout << "\n";
	}
}


int main()
{
	int M[ROW][COL] = { { 1, 2, 3, 4 },
						{ 5, 6, 7, 8 },
						{ 9, 10, 11, 12 },
						{ 13, 14, 15, 16 },
						{ 17, 18, 19, 20 },};
	cout << "Given matrix is " << endl;
	printMatrix(M);

	cout << "\nDiagonal printing of matrix is " << endl;
	diagonalOrder(M);
	return 0;
}

