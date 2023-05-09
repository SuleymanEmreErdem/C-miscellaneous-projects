#include <stdio.h>
#include <stdlib.h>

void read_array(int *array, int size);
void print_array(int *array, int size);
void selection_sort(int *array, int size);
void swap(int *a, int *b);

int main() {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  // TODO: Allocate memory for the array using dynamic memory allocation
  int *array = malloc(size * sizeof(int));
  // TODO: Call read_array function to read the elements of the array
  read_array(array, size);
  // TODO: Call selection_sort function to sort the array
  selection_sort(array, size);
  // TODO: Call print_array function to print the sorted array
  print_array(array, size);
  // TODO: Free the memory allocated for the array
  free(array);

  return 0;
}

void read_array(int *array, int size) {
  // TODO: Ask the user to enter the elements of the array and store them in array
  for(int i=0; i<size; i++)
    scanf("%d", (array+i));
}

void print_array(int *array, int size) {
  // TODO: Print the elements of the array to the console
  for(int i=0; i<size; i++)
    printf("%d ", *(array+i));
}

void selection_sort(int *array, int size) {
  // TODO: Sort the array in ascending order using the selection sort algorithm
  for(int j=size; j>=0; j--)
  {
    for(int i=0; i<j-1; i++)
    {
      if(*(array+i)>*(array+i+1))
        swap((array+i), (array+i+1));
    }
  }
}

void swap(int *a, int *b)
{
  int t = *b;
  *b = *a;
  *a = t;
}
