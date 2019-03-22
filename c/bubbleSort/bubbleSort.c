#include <stdio.h>
#define ARRAY_SIZE 5

void bubbleSort(int arr[]);

int main(void)
{
    int array[ARRAY_SIZE] = {3, 5, 2, 1, 2};
    bubbleSort(array);

    return 0;
}

void bubbleSort(int arr[])
{
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        for(int j = 0; j < ARRAY_SIZE - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

  for(int k = 0; k < ARRAY_SIZE; k++)
  {
      printf("%d ", arr[k]);
  }
}