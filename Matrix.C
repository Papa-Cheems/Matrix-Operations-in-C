#include <stdio.h>
#include <windows.h>

int main() {
	system("cls");
	
	int row, column;
	
	printf("Enter the number of rows in the array: ");
	scanf("%d", &row);
	printf("Enter the number of columns in the array: ");
	scanf("%d", &column);
	printf("\n");
	int matrixA[row][column], matrixB[row][column], matrixX[row][column], operation, highest;

	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			printf("Enter the value of matrixA[%d][%d]: ", i, j);
			scanf("%d", &matrixA[i][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			printf("Enter the value of matrixB[%d][%d]: ", i, j);
			scanf("%d", &matrixB[i][j]);
		}
	}
	
	printf("\n\tmatrixA\n\t");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			printf("%d ", matrixA[i][j]);
		}
		printf("\n\t");
	}
	printf("\n\tmatrixB\n\t");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			printf("%d ", matrixB[i][j]);
		}
		printf("\n\t");
	}
	
	for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            matrixX[i][j] = 0;
        }
    }	
    
	int matrixSumA, matrixSumB, matrixSum;
	int matrixDifferenceA, matrixDifferenceB, matrixDifference;
	int matrixProductA, matrixProductB, matrixProduct;
	int matrixTemporary[row][column], matrixTranspose;
	float rowAverage, rowSum;
	
	matrixSumA = 0;
    matrixSumB = 0;
    matrixSum = 0;
	matrixDifferenceA = 0;
	matrixDifferenceB = 0;
	matrixDifference = 0;
	matrixProductA = 1;
	matrixProductB = 1;
	matrixProduct = 1;
	
	printf("\n(Choose from 1-5)\n1. +\n2. -\n3. *\n4. transposition\n5. Average of each row");
	printf("\nOperation: ");
	scanf("%d", &operation);
	switch (operation) {
		case 1:
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					matrixSumA += matrixA[i][j];
				}
			}
			printf("\nSum of Matrix A: %d", matrixSumA);
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					matrixSumB += matrixB[i][j];
				}
			}
			printf("\nSum of Matrix B: %d", matrixSumB);
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					matrixSum += matrixA[i][j] + matrixB[i][j];
				}
			}
			printf("\nSum of Matrix A and B: %d", matrixSum);
			printf("\nSum in Matrix:\n");
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					matrixX[i][j] += matrixA[i][j] + matrixB[i][j];
					printf("%d ", matrixX[i][j]);
				}
			printf("\n");
			}
		break;
		case 2:
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					matrixDifferenceA -= matrixA[i][j];
				}
			}
			printf("\nDifference of Matrix A: %d", matrixDifferenceA);
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					matrixDifferenceB -= matrixB[i][j];
				}
			}
			printf("\nDifference of Matrix B: %d", matrixDifferenceB);
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					matrixDifference -= matrixA[i][j] - matrixB[i][j];
				}
			}
			printf("\nDifference of Matrix A and B: %d", matrixDifference);
			printf("\nDifference in Matrix:\n");
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					matrixX[i][j] += matrixA[i][j] - matrixB[i][j];
					printf("%d ", matrixX[i][j]);
				}
			printf("\n");
			}
		break;
		case 3: 
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					matrixProductA *= matrixA[i][j];
				}
			}
			printf("\nProduct of Matrix A: %d", matrixProductA);
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					matrixProductB *= matrixB[i][j];
				}
			}
			printf("\nProduct of Matrix B: %d", matrixProductB);
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					matrixProduct *= matrixA[i][j] * matrixB[i][j];
				}
			}
			printf("\nProduct of Matrix A and B: %d", matrixProduct);
		break;
		case 4: 
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					matrixTemporary[i][j] = matrixA[i][j];
					matrixA[i][j] = matrixB[i][j];
					matrixB[i][j] = matrixTemporary[i][j];
				}
			}
				printf("\n\tmatrixA\n\t");
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					printf("%d ", matrixA[i][j]);
				}
				printf("\n\t");
			}
			printf("\n\tmatrixB\n\t");
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					printf("%d ", matrixB[i][j]);
				}
				printf("\n\t");
			}
		break;
		case 5:
			printf("\n\tMatrixA");
			for (int i = 0; i < row; i++) {
				int rowSum = 0;
				for (int j = 0; j < column; j++) {
					rowSum += matrixA[i][j];
				}
				rowAverage = (float)rowSum/column;
			    printf("\nThe average of row is %d: %.2f\n", i + 1, rowAverage);
			}
			printf("\n\tMatrixB");
			for (int i = 0; i < row; i++) {
				int rowSum = 0;
				for (int j = 0; j < column; j++) {
					rowSum += matrixB[i][j];
				}
				rowAverage = (float)rowSum/column;
			    printf("\nThe average of row is %d: %.2f\n", i + 1, rowAverage);
			}
		break;
		default: 
			printf("Enter a number from 1-5");
		break;
	}
	
	return 0;
}


