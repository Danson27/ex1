/******************
Name: Dan Sonnenblick
ID: 345287882
Assignment: exercise 1
*******************/
#include <stdio.h>

int main() {

    // What bit
    printf("What bit:\n");
    //int name num taken from excercise name
    int num1, num2;
    printf ("Please enter a number: \n");
    scanf("%d", &num1);
    printf ("Please enter a position: \n");
    scanf ("%d", &num2);
    //move the given number to the right so that
    //the bit position is the LSB
    //by doing &1, you get the number at the LSB
    int numResult = (num1 >> num2) & 1;
    printf ("The bit in position %d of the number %d is: %d\n", num2, num1, numResult);


    // Set bit
    printf("\nSet bit:\n");
    //int name set taken from excercise name
    int set1, set2;
    printf ("Please enter a number: \n");
    scanf("%d", &set1);
    printf ("Please enter a position: \n");
    scanf ("%d", &set2);
    //mask1 makes a number that is all zeros, except 1 at given bit postion
    int mask1 = (1 << set2);
    //mask 0 is the oposite of mask1 (all ones except for a zero at bit position)
    int mask0 = ~(1 << set2);
    //mask1 OR set1 will always return the number with the 1 in the position
    int numSetToOne = (set1 | mask1);
    //mask0 AND set1 will always return the number with 0 is the position
    int numSetToZero = (set1 & mask0);
    printf ("Number with bit %d set to 1: %d \n Number with bit %d set to 0: %d\n", set2, numSetToOne, set2, numSetToZero);

    // Toggle bit
    printf("\nToggle bit:\n");
    //int name toggle taken from excercise name
    int toggle1, toggle2;
    printf ("Please enter a number: \n");
    scanf("%d", &toggle1);
    printf ("Please enter a position: \n");
    scanf ("%d", &toggle2);
    //maskToggle creats a number of all zeros, except for a 1 at bit position
    int maskToggle = (1 << toggle2);
    //toggled returns the toggled number by using the XOR function
    int toggled = (toggle1 ^ maskToggle);
    printf ("Number with bit %d toggled: %d \n", toggle2, toggled);

    // Even - Odd
    printf("\nEven - Odd:\n");
    //int evenOdd taken from excercise name
    int evenOdd;
    printf ("Please enter a number: \n");
    scanf("%d", &evenOdd);
    //check the LSB. if its 0, the number is even and print 1
    if ((evenOdd & 1) == 0) {
        printf ("1\n");
    }
    //only other case is the LSB is 1 and the number is odd
    //in this case, print 0
    else {
      printf ("0\n");
    }

    // 3, 5, 7, 11
    printf("\n3, 5, 7, 11:\n");
    //int name oct taken from excercise name
    int oct1, oct2;
    printf ("Please enter the first number (octal): \n");
    //saves the enetered number as a number in base 8
    scanf("%o", &oct1);
    printf ("Please enter the second number (octal): \n");
    //saves the enetered number as a number in base 8
    scanf ("%o", &oct2);
    //add the two entered numbers, still in base 8
    int addResult = oct1 + oct2;
    //each int bit returns the number of the bit in the given position
    int bit3 = (addResult >> 3) &1;
    int bit5 = (addResult >> 5) &1;
    int bit7 = (addResult >> 7) &1;
    int bit11 = (addResult >> 11) &1;
    //the %X will print the number in the hexidecimal base
    printf ("The sum in hexadecimal: %X\n", addResult);
    printf ("The 3, 5, 7, 11 bits are: %d%d%d%d\n", bit3, bit5, bit7, bit11);

    printf("Bye!\n");

    return 0;
}


