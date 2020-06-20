// Program to transpose a matrix M[i][j] in other matrix N[j][i]

#include <stdio.h>

void displayMatrix (int nRows, int nCols,
		            int matrix[nRows][nCols])
{
	int row, column;

	for (row = 0; row < nRows; row++)
	{
		for (column = 0; column < nCols; column++)
			printf("%5i", matrix[row][column]);
		printf("\n");
	}
}


void transposeMatrix (int nRows, int nCols,
					 int M[nRows][nCols])
{
	int row, column;
	int N[nCols][nRows];

	for (row = 0; row < nRows; row++)
		for (column = 0; column < nCols; column++)
			N[column][row] = M[row][column];

	printf("Matrix N[%i][%i]:\n", nCols, nRows);
	displayMatrix (nCols, nRows, N);

}

int main (void)
{
	int M[2][3] = {
					{ 1, 2, 3 },
					{ 4, 5, 6 }
				  };
	int N[3][2];

	printf("Matrix M[2][3]:\n");
	displayMatrix (2, 3, M);

	transposeMatrix (2, 3, M);

	return 0;
}
