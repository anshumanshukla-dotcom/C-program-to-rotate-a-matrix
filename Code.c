//C code to rotate a square matrix.
//A square matrix is a matrix containing equal number of rows and columns.
#include <stdio.h>

int main()
{
  int d;
  printf("Enter the dimensions for the matrix: ");  //taking the dimensions of the matrix as an input
  scanf("%d", &d);
  int arr[d][d], aux[d][d];
  printf("Enter the elements: ");  //scanning the elements of the matrix
  for(int i=0;i<d;i++)
  for(int j=0;j<d;j++)
  scanf("%d", &arr[i][j]);
  for(int i=0;i<d;i++)  //logic for rotation
  for(int j=0;j<d;j++)
  aux[j][d-i-1]=arr[i][j];
  printf("The resulting matrix is \n");  //printing the rotated matrix
  for(int i=0;i<d;i++)
  for(int j=0;j<d;j++)
  printf("%d\n", aux[i][j]);
  return 0;
}