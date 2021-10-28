#include <stdio.h>
#include <stdlib.h>

int container[1000];
int count = 0;
int maxSubArraySum(int *array, int arraySize);

int maxSubArraySum(int *array, int size) {


	int max = 0;	

	for (int i = 0; i < size; i++) {
		
		if (array[i] > 0) {
			max += array[i];
			container[count] = array[i];
			count++;
		}
	}

	return max;
}

int main(int agrc, char *argv[]) {

	int size = 0;
	int array[1000];

	printf("Enter the size \n");
	scanf("%d", &size);
	printf("Enter the the elements of the array: \n");

	for (int i = 0; i < size; i++) {
		scanf("%d", &array[i]);
	}

	int total = maxSubArraySum(array, size);

	printf("The subarray is: ");
	for (int i = 0; i < count; i++) {
		printf("%d ", container[i]);
	}

	printf("With the total: %d", total);


}