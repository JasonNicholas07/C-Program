//selection sort----Select the minimum value then swap it to the front

#include <stdio.h>

int main () {
	int array[5] = {15, 6, 3, 8, 2};
	int lowest, index, temp;
	
	
	for (int i = 0; i<4; i++){
		index = i;
		
		for (int j = i+1; j<5; j++){
			if (array[j] < array[index]){
				index = j;
			}
		}
		
		if (index != i){
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
		}
	}
	
	for (int i = 0; i<5; i++){
		printf("%d ", array[i]);
	}
	
	
	return 0;
}
