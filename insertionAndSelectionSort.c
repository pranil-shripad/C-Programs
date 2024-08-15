#include <stdio.h>

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min = step;
    for (int i = step + 1; i < size; i++) {
      if (array[i] < array[min])
        min = i;
    }
    swap(&array[min], &array[step]);
  }
}


int main() {
    int i,sw,num;
    printf("Enter number of elements in array: ");
    scanf("%d",&num);
    int arr[num];
    for(i = 0; i < num; i++){
        printf("Enter array element at index[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter a choice for 1. Insertion Sort 2. Selection Sort: ");
    scanf("%d",&sw);
    int size = sizeof(arr) / sizeof(arr[0]);
    switch(sw){
        case 1: insertionSort(arr, size);
                printf("Sorted array in ascending order:\n");
                printArray(arr, size);
                printf("Pranil Shripad | 36");
                break;

        case 2: selectionSort(arr, size);
                printf("Sorted array in Acsending Order:\n");
                printArray(arr, size);
                printf("Pranil Shripad | 36");
                break;
  }
}