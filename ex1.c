/******************
Name: Avigail shemesh
ID: 326667771
Assignment: 1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int number1, position1;
  printf("Please enter a number:\n");
  scanf("%i",&number1);
  printf("Please enter a position:\n");
  scanf("%i",&position1);
  int bitInPosition= (number1 >> position1) & 1;
  printf("The bit in position %i of number %i is: %i\n",position1, number1, bitInPosition);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  int number2, position2;
  printf("Please enter a number:\n");
  scanf("%i",&number2);
  printf("Please enter a position:\n");
  scanf("%i",&position2);
  int set1 = number2 | (1<<position2);
  int set0 = number2 & ~(1<<position2);
  printf("Number with bit %i set to 1: %i\n", position2, set1);
  printf("Number with bit %i set to 0: %i\n", position2, set0);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  int number3, position3;
  printf("Please enter a number:\n");
  scanf("%i",&number3);
  printf("Please enter a position:\n");
  scanf("%i",&position3);
  int toggle= number3 ^ (1<<position3);
  printf("Number with bit %i toggled: %i\n", position3, toggle);

  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  int number4;
  printf("Please enter a number:\n");
  scanf("%i",&number4);
  int isOdd = ~(number4) & 0x1;
  printf("%i\n", isOdd);

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int num1, num2;
  printf("Please enter the first number (octal):\n");
  scanf("%o",&num1);
  printf("Please enter the second number (octal):\n");
  scanf("%o",&num2);
  int hexSum = num1 + num2;
  printf("The sum in hexadecimal: %X\n", hexSum);
  printf("The 3,5,7,11 bits are: %i%i%i%i\n", ((hexSum >> 3) & 1), ((hexSum >> 5) & 1), ((hexSum >> 7) & 1), ((hexSum >> 11) & 1));
  printf("Bye!\n");

  return 0;
}
