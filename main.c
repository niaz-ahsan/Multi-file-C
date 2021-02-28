/*
 * main.c
 *
 *  Created on: Feb 28, 2021
 *      Author: Niaz
 */
#include <stdio.h>
#include "math.h"

int main() {
	int operand1 = 500;
	int operand2 = 6000;

	printf("Addition = %d\n", addition(operand1, operand2));

	printf("Subtaction = %d\n", subtraction(operand1, operand2));

	printf("Multiplication = %lld\n", multiplication(operand1, operand2));

	printf("Division = %f\n", division(operand1, operand2));

	return 0;
}

