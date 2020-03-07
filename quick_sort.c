//
void qsort2(int *a, int n)
{
  //check if size of current array is less than two otherwise return
  	if(n<2)
  		return;
      //locating a pivot in the middle of original array
  	int pivot = a[n / 2];
    //declaring left side equal to array
  	int *left = a;
  	int *right = a + n - 1;

    //Traverse while left side is smaller than the right side
  	while(left <= right)
  	{
    		if(*left < pivot)
    			left++;
    		else if (*right > pivot)
    			right--;
    		else
    		{
          //swap elements using helper function
    			swapElement(left, right);
    			left++;
    			right--;
    		}
  	}
    //recursively call quick sort on both right and left side of current array
  	qsort2(a, right - a + 1);
  	qsort2(left, a + n - left);
}

//Simple helper function to swap two elements in array
void swapElement(int *a, int *b)
{

	int temporary = *a;
	*a = *b;
	*b = temporary;
}

void printQuickArray(int *array)
{
  //Traverse current array that is sorted and print element by element
	for(int i = 0; i < sizeOfOriArray; i++)
	{
		printf("%d", *(array + i));
		if(i < sizeOfOriArray-1)
			printf(", ");
	}
	printf("\n");
}
 A Objective C implementation of Quick and Merge Sort
//Andre Barajas, Spring 2020

#include <stdio.h>

//global variable to hold size of array
int sizeOfOriArray;
void qsort2(int *a, int n)
{
  //check if size of current array is less than two otherwise return
  	if(n<2)
  		return;
      //locating a pivot in the middle of original array
  	int pivot = a[n / 2];
    //declaring left side equal to array
  	int *left = a;
  	int *right = a + n - 1;

    //Traverse while left side is smaller than the right side
  	while(left <= right)
  	{
    		if(*left < pivot)
    			left++;
    		else if (*right > pivot)
    			right--;
    		else
    		{
          //swap elements using helper function
    			swapElement(left, right);
    			left++;
    			right--;
    		}
  	}
    //recursively call quick sort on both right and left side of current array
  	qsort2(a, right - a + 1);
  	qsort2(left, a + n - left);
}

//Simple helper function to swap two elements in array
void swapElement(int *a, int *b)
{

	int temporary = *a;
	*a = *b;
	*b = temporary;
}

void printQuickArray(int *array)
{
  //Traverse current array that is sorted and print element by element
	for(int i = 0; i < sizeOfOriArray; i++)
	{
		printf("%d", *(array + i));
		if(i < sizeOfOriArray-1)
			printf(", ");
	}
	printf("\n");
}

//Main method to test out quick and merge sort api's
int main()
{

	sizeOfOriArray = 10;

  //-----------Quick sort -----------------------------------------

	int array[] ={ 4, 65, 2, -31, 0, 99, 2, 83, 782, 1};
  printf("---------------Sorting arrray using Quick sort alogorithm----------------- \n");
	printf("Before sort: \n");
	printQuickArray(array);
	qsort2(array, sizeOfOriArray);
	printf("\nAfter sort: \n");
	printQuickArray(array);

	return 0;
}
