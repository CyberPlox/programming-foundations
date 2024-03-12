// Multiply any two matrices using array

#include <stdio.h>

int main(){

  int matrx1[10][10], matrx2[10][10], matrx3[10][10];
  int row1, column1, row2, column2;
  int i, j, k;

  printf("\nEnter the dimensions of first matrix(<=10):");
  scanf("%i %i", &row1, &column1);

  printf("\nEnter first matrix:");
  for(i = 0; i < row1; i++){
    for(j = 0; j < column1; j++){
      scanf("%i", &matrx1[i][j]);
    }
  }

  printf("\nFirst matrix:\n");
  for(i = 0; i < row1; i++){
    for(j = 0; j < column1; j++){
      printf("%i\t", matrx1[i][j]);
    }
    printf("\n");
  }

  printf("\nEnter the dimensions of second matrix(<=10):");
  scanf("%i %i", &row2, &column2);
  
  printf("\nEnter second matrix:");
  for(i = 0; i < row2; i++){
    for(j = 0; j < column2; j++){
      scanf("%i", &matrx2[i][j]);
    }
  }

  printf("\nSecond matrix:\n");
  for(i = 0; i < row2; i++){
    for(j = 0; j < column2; j++){
      printf("%i\t", matrx2[i][j]);
    }
    printf("\n");
  }

  if(column1 == row2){
    for(i = 0; i < row1; i++ ){
      for(j = 0; j < column2; j++){
        matrx3[i][j] = 0;
        for(k = 0; k < column1; k++){
          matrx3[i][j] += matrx1[i][k] * matrx2[k][j];  
        }
      }
    }
    printf("\n");
    printf("Matrix Multiplication:\n");

    for(i = 0; i < row1; i++){
      for(j = 0; j < column2; j++){
        printf("%i\t", matrx3[i][j]);
      }
      printf("\n");
    }
  }else if(row1 == column2){
    for(i = 0; i < row2; i++){
      for(j = 0; j < column1; j++){
        matrx3[i][j] = 0;
        for(k = 0; k < column2; k++){
          matrx3[i][j] += matrx1[k][j] * matrx2[i][k];
        }
      }
    }
    printf("\n");
    printf("Matrix Multiplication:\n");

    for(i = 0; i < row2; i++){
      for(j = 0; j < column2; j++){
        printf("%i\t", matrx3[i][j]);
      }
      printf("\n");
    } 
  }else
    printf("Matrix multiplication is not possible.\n");

  return 0;
}
