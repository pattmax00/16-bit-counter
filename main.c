#include <stdio.h>

int main(void) {

  short unsigned int number; 

  int oneCounter = 0;

  // Explaination and user input
  printf("Enter positive int between 0 - 65535: ");
  scanf("%hu", &number);

  // Creates and assigns original number for output after calculations
	short unsigned int originalNumber = number;

  // Solves bit calculation 16 times (short unsigned int)
	for (int i = 0; i <= 16; i++){
	  oneCounter += (number % 2); // Increments counter if bit is one
    number = number / 2; // Moves on to next bit
	}

  // Reverses 1 count to 0 count
  int zeroCounter = 16 - oneCounter;

  // Display 0 count
  printf("0s in 16-bit binary representation of %hu: %d\n", originalNumber, zeroCounter);
  
	// Display 1 count
	printf("1s in 16-bit binary representation of %hu: %d\n", originalNumber, oneCounter);

  return 0;
}
