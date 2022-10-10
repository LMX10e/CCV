#include <stdio.h>
#include <stdlib.h>

int ccLogic(int size) {
	
	int x = 0;
	int resultodd = 0;
	int resulteve = 0;
	int num[size];
	
	printf("Enter your numbers: ");
	
	while (x < size) {
		scanf("%d ", &num[x]);
		x++;
	}
	
		for (int i = 0; i < size; i++) {
			if (i % 2 == 0) {
				int f = num[i] * 2;
				if (f >= 10) {
					resulteve += f - 9;

				} else  { resulteve += f; }

			} else {
				resultodd += num[i] ;
				
			} 
		}
			int total = (resultodd + resulteve) % 10;
			//printf("\n %d \n", total);
			if (total == 0) {
				printf("Valid Card\n");
			} else {
				printf("Invalid card\n");
			}


}

int main() {
	int option;
	int size;
	printf("Choose which card you have: \n\t1.Visa \n\t2.American Express \n\t3.Mastercard \n--> ");
	scanf("%d", &option);

	//aaaaaaaa
	if ( option == 1) { size = 16; }
    else if (option == 2) {size = 15; }
	else if (option == 3) {size = 16; }

	ccLogic(size);

}
